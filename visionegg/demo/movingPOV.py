#!/usr/bin/env python
"""A demonstration of 2 viewports.
"""
import math

import VisionEgg
from VisionEgg.Core import *
from VisionEgg.AppHelper import *
from VisionEgg.Textures import *

from OpenGL.GL import *
from OpenGL.GLU import *

def angle_as_function_of_time(t):
    return 90.0*t # rotate at 90 degrees per second

def projection_matrix_f(t):
    matrix_mode = glGetIntegerv(GL_MATRIX_MODE) # Save the GL of the matrix state
    glMatrixMode(GL_PROJECTION)
    glPushMatrix()
    glLoadIdentity()
    
    # All of the following variables don't change, so for speed they
    # could be stored in a variable that persists when this function
    # goes out of scope.
    fov_x=55.0
    z_clip_near = 0.1
    z_clip_far=10000.0
    aspect_ratio=float(screen.size[0]/2)/screen.size[1]
    fov_y = fov_x / aspect_ratio
    
    gluPerspective(fov_y,aspect_ratio,z_clip_near,z_clip_far)
    gluLookAt(0.0,t*0.3+1.0,-2.0,
              0.0,0.0,0.0,
              0.0,1.0,0.0)
    results = glGetFloatv(GL_PROJECTION_MATRIX)
    glPopMatrix()
    if matrix_mode != GL_PROJECTION:
        glMatrixMode(matrix_mode) # Set the matrix mode back
    return results

screen = get_default_screen()
mid_x = screen.size[0]/2
mid_y = screen.size[1]/2
projection1 = SimplePerspectiveProjection(fov_x=90.0,aspect_ratio=(float(mid_x)/screen.size[1]))
projection2 = SimplePerspectiveProjection()
viewport1 = Viewport(screen,(0,0),(mid_x,screen.size[1]),projection1)
viewport2 = Viewport(screen,(mid_x,0),(mid_x,screen.size[1]),projection2)
stimulus = SpinningDrum()
stimulus.init_gl()
viewport1.add_stimulus(stimulus)
viewport2.add_stimulus(stimulus)

p = Presentation(duration=(10.0,'seconds'),viewports=[viewport1,viewport2])

p.add_realtime_time_controller(stimulus.parameters,'angle', angle_as_function_of_time)
p.add_realtime_time_controller(projection2.parameters,'matrix', projection_matrix_f)

p.go()
