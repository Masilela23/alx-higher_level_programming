#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
* print_python_list_info -this functn  prints some basic info about pytohn list
*
* @p: python object
**/

void print_python_list_info(PyObject *p)
{
	long int size = PyList_Size(p);
	int dee;
	PyListObject *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (dee = 0; dee < size; dee++)
		printf("Element %i: %s\n", dee, Py_TYPE(obj->ob_item[dee])->tp_name);

}
