/* Generated by Pyrex 0.9.5.1a on Sun Jan 20 20:09:41 2008 */

#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
__PYX_EXTERN_C double pow(double, double);
#include "vegl.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from _vegl */

typedef struct {
  int two;
  int nd;
  char typekind;
  int itemsize;
  int flags;
  Py_intptr_t (*shape);
  Py_intptr_t (*strides);
  void (*data);
} __pyx_t_5_vegl_PyArrayInterface;



/* Implementation of _vegl */


static PyObject *__pyx_n_numpy;
static PyObject *__pyx_n_veglGetTexImage;
static PyObject *__pyx_n_veglTexSubImage1D;

static PyObject *__pyx_n___array_struct__;

static PyObject *__pyx_f_5_vegl_veglGetTexImage(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_5_vegl_veglGetTexImage(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_target = 0;
  PyObject *__pyx_v_level = 0;
  PyObject *__pyx_v_format = 0;
  PyObject *__pyx_v_type = 0;
  PyObject *__pyx_v_buf = 0;
  __pyx_t_5_vegl_PyArrayInterface (*__pyx_v_inter);
  PyObject *__pyx_v_hold_onto_until_done_with_array;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  int __pyx_3;
  int __pyx_4;
  int __pyx_5;
  static char *__pyx_argnames[] = {"target","level","format","type","buf",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OOOOO", __pyx_argnames, &__pyx_v_target, &__pyx_v_level, &__pyx_v_format, &__pyx_v_type, &__pyx_v_buf)) return 0;
  Py_INCREF(__pyx_v_target);
  Py_INCREF(__pyx_v_level);
  Py_INCREF(__pyx_v_format);
  Py_INCREF(__pyx_v_type);
  Py_INCREF(__pyx_v_buf);
  __pyx_v_hold_onto_until_done_with_array = Py_None; Py_INCREF(Py_None);

  /* "/home/astraw/src/ve/visionegg-devel.root/trunk/visionegg/VisionEgg/_vegl.pyx":30 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_buf, __pyx_n___array_struct__); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 30; goto __pyx_L1;}
  Py_DECREF(__pyx_v_hold_onto_until_done_with_array);
  __pyx_v_hold_onto_until_done_with_array = __pyx_1;
  __pyx_1 = 0;

  /* "/home/astraw/src/ve/visionegg-devel.root/trunk/visionegg/VisionEgg/_vegl.pyx":31 */
  __pyx_v_inter = ((__pyx_t_5_vegl_PyArrayInterface (*))PyCObject_AsVoidPtr(__pyx_v_hold_onto_until_done_with_array));

  /* "/home/astraw/src/ve/visionegg-devel.root/trunk/visionegg/VisionEgg/_vegl.pyx":32 */
  if (!(__pyx_v_inter->two == 2)) {
    PyErr_SetNone(PyExc_AssertionError);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 32; goto __pyx_L1;}
  }

  /* "/home/astraw/src/ve/visionegg-devel.root/trunk/visionegg/VisionEgg/_vegl.pyx":34 */
  __pyx_2 = PyInt_AsLong(__pyx_v_target); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 34; goto __pyx_L1;}
  __pyx_3 = PyInt_AsLong(__pyx_v_level); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 34; goto __pyx_L1;}
  __pyx_4 = PyInt_AsLong(__pyx_v_format); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 34; goto __pyx_L1;}
  __pyx_5 = PyInt_AsLong(__pyx_v_type); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 34; goto __pyx_L1;}
  glGetTexImage(__pyx_2,__pyx_3,__pyx_4,__pyx_5,__pyx_v_inter->data);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("_vegl.veglGetTexImage");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_hold_onto_until_done_with_array);
  Py_DECREF(__pyx_v_target);
  Py_DECREF(__pyx_v_level);
  Py_DECREF(__pyx_v_format);
  Py_DECREF(__pyx_v_type);
  Py_DECREF(__pyx_v_buf);
  return __pyx_r;
}

static PyObject *__pyx_f_5_vegl_veglTexSubImage1D(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_5_vegl_veglTexSubImage1D(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_target = 0;
  PyObject *__pyx_v_level = 0;
  PyObject *__pyx_v_xoffset = 0;
  PyObject *__pyx_v_width = 0;
  PyObject *__pyx_v_format = 0;
  PyObject *__pyx_v_type = 0;
  PyObject *__pyx_v_data = 0;
  __pyx_t_5_vegl_PyArrayInterface (*__pyx_v_inter);
  PyObject *__pyx_v_hold_onto_until_done_with_array;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  int __pyx_3;
  int __pyx_4;
  int __pyx_5;
  int __pyx_6;
  int __pyx_7;
  static char *__pyx_argnames[] = {"target","level","xoffset","width","format","type","data",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OOOOOOO", __pyx_argnames, &__pyx_v_target, &__pyx_v_level, &__pyx_v_xoffset, &__pyx_v_width, &__pyx_v_format, &__pyx_v_type, &__pyx_v_data)) return 0;
  Py_INCREF(__pyx_v_target);
  Py_INCREF(__pyx_v_level);
  Py_INCREF(__pyx_v_xoffset);
  Py_INCREF(__pyx_v_width);
  Py_INCREF(__pyx_v_format);
  Py_INCREF(__pyx_v_type);
  Py_INCREF(__pyx_v_data);
  __pyx_v_hold_onto_until_done_with_array = Py_None; Py_INCREF(Py_None);

  /* "/home/astraw/src/ve/visionegg-devel.root/trunk/visionegg/VisionEgg/_vegl.pyx":40 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_data, __pyx_n___array_struct__); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 40; goto __pyx_L1;}
  Py_DECREF(__pyx_v_hold_onto_until_done_with_array);
  __pyx_v_hold_onto_until_done_with_array = __pyx_1;
  __pyx_1 = 0;

  /* "/home/astraw/src/ve/visionegg-devel.root/trunk/visionegg/VisionEgg/_vegl.pyx":41 */
  __pyx_v_inter = ((__pyx_t_5_vegl_PyArrayInterface (*))PyCObject_AsVoidPtr(__pyx_v_hold_onto_until_done_with_array));

  /* "/home/astraw/src/ve/visionegg-devel.root/trunk/visionegg/VisionEgg/_vegl.pyx":42 */
  if (!(__pyx_v_inter->two == 2)) {
    PyErr_SetNone(PyExc_AssertionError);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 42; goto __pyx_L1;}
  }

  /* "/home/astraw/src/ve/visionegg-devel.root/trunk/visionegg/VisionEgg/_vegl.pyx":44 */
  __pyx_2 = PyInt_AsLong(__pyx_v_target); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  __pyx_3 = PyInt_AsLong(__pyx_v_level); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  __pyx_4 = PyInt_AsLong(__pyx_v_xoffset); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  __pyx_5 = PyInt_AsLong(__pyx_v_width); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  __pyx_6 = PyInt_AsLong(__pyx_v_format); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  __pyx_7 = PyInt_AsLong(__pyx_v_type); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  glTexSubImage1D(__pyx_2,__pyx_3,__pyx_4,__pyx_5,__pyx_6,__pyx_7,__pyx_v_inter->data);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("_vegl.veglTexSubImage1D");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_hold_onto_until_done_with_array);
  Py_DECREF(__pyx_v_target);
  Py_DECREF(__pyx_v_level);
  Py_DECREF(__pyx_v_xoffset);
  Py_DECREF(__pyx_v_width);
  Py_DECREF(__pyx_v_format);
  Py_DECREF(__pyx_v_type);
  Py_DECREF(__pyx_v_data);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n___array_struct__, "__array_struct__"},
  {&__pyx_n_numpy, "numpy"},
  {&__pyx_n_veglGetTexImage, "veglGetTexImage"},
  {&__pyx_n_veglTexSubImage1D, "veglTexSubImage1D"},
  {0, 0}
};

static struct PyMethodDef __pyx_methods[] = {
  {"veglGetTexImage", (PyCFunction)__pyx_f_5_vegl_veglGetTexImage, METH_VARARGS|METH_KEYWORDS, 0},
  {"veglTexSubImage1D", (PyCFunction)__pyx_f_5_vegl_veglTexSubImage1D, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC init_vegl(void); /*proto*/
PyMODINIT_FUNC init_vegl(void) {
  PyObject *__pyx_1 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("_vegl", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};

  /* "/home/astraw/src/ve/visionegg-devel.root/trunk/visionegg/VisionEgg/_vegl.pyx":2 */
  __pyx_1 = __Pyx_Import(__pyx_n_numpy, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_numpy, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/home/astraw/src/ve/visionegg-devel.root/trunk/visionegg/VisionEgg/_vegl.pyx":36 */
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("_vegl");
}

static char *__pyx_filenames[] = {
  "_vegl.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list) {
    PyObject *__import__ = 0;
    PyObject *empty_list = 0;
    PyObject *module = 0;
    PyObject *global_dict = 0;
    PyObject *empty_dict = 0;
    PyObject *list;
    __import__ = PyObject_GetAttrString(__pyx_b, "__import__");
    if (!__import__)
        goto bad;
    if (from_list)
        list = from_list;
    else {
        empty_list = PyList_New(0);
        if (!empty_list)
            goto bad;
        list = empty_list;
    }
    global_dict = PyModule_GetDict(__pyx_m);
    if (!global_dict)
        goto bad;
    empty_dict = PyDict_New();
    if (!empty_dict)
        goto bad;
    module = PyObject_CallFunction(__import__, "OOOO",
        name, global_dict, empty_dict, list);
bad:
    Py_XDECREF(empty_list);
    Py_XDECREF(__import__);
    Py_XDECREF(empty_dict);
    return module;
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
    while (t->p) {
        *t->p = PyString_InternFromString(t->s);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
    PyObject *py_srcfile = 0;
    PyObject *py_funcname = 0;
    PyObject *py_globals = 0;
    PyObject *empty_tuple = 0;
    PyObject *empty_string = 0;
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    
    py_srcfile = PyString_FromString(__pyx_filename);
    if (!py_srcfile) goto bad;
    py_funcname = PyString_FromString(funcname);
    if (!py_funcname) goto bad;
    py_globals = PyModule_GetDict(__pyx_m);
    if (!py_globals) goto bad;
    empty_tuple = PyTuple_New(0);
    if (!empty_tuple) goto bad;
    empty_string = PyString_FromString("");
    if (!empty_string) goto bad;
    py_code = PyCode_New(
        0,            /*int argcount,*/
        0,            /*int nlocals,*/
        0,            /*int stacksize,*/
        0,            /*int flags,*/
        empty_string, /*PyObject *code,*/
        empty_tuple,  /*PyObject *consts,*/
        empty_tuple,  /*PyObject *names,*/
        empty_tuple,  /*PyObject *varnames,*/
        empty_tuple,  /*PyObject *freevars,*/
        empty_tuple,  /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        __pyx_lineno,   /*int firstlineno,*/
        empty_string  /*PyObject *lnotab*/
    );
    if (!py_code) goto bad;
    py_frame = PyFrame_New(
        PyThreadState_Get(), /*PyThreadState *tstate,*/
        py_code,             /*PyCodeObject *code,*/
        py_globals,          /*PyObject *globals,*/
        0                    /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    py_frame->f_lineno = __pyx_lineno;
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_srcfile);
    Py_XDECREF(py_funcname);
    Py_XDECREF(empty_tuple);
    Py_XDECREF(empty_string);
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
