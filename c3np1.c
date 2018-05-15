#include <Python.h>
 
static PyObject* c3np1(PyObject* self, PyObject* args)
{
  unsigned long long n;
  double count;

  count = 0;
  if (!PyArg_ParseTuple(args, "i", &n))
    return NULL;
  
  while (n > 1)
    {
      if (n % 2 == 0)
	{
	  n = n / 2;
	}
      else
	{
	  n = 3 * n + 1;
	  count += 1;
	    
	}
    }
  
  PyObject* result = PyFloat_FromDouble(count);  
  return result;
}
 
static PyMethodDef mymathMethods[] =
{          
     {"c3np1", c3np1, METH_VARARGS, "c3np1(n): put proper documentation."},
     {NULL, NULL, 0, NULL}
};


static struct PyModuleDef myMath = {
  PyModuleDef_HEAD_INIT,
  "myMath",
  NULL, 
  -1,
  mymathMethods
};

/* 
PyMODINIT_FUNC
 
initrng(void)
{
     (void) Py_InitModule("rng", rngMethods);
}
*/


PyMODINIT_FUNC
PyInit_myMath(void)
{
  return PyModule_Create(&myMath);
}
