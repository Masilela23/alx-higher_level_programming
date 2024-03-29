#include "Python.h"

/**
 * print_python_string - this function prints
 * information about Python strings.
 * @p: A PyObject string object.
 */

void print_python_string(PyObject *p)
{
	long int lenth;

	fflush(stdout);

	printf("[.] string object info\n");
	if (strcmp(p->ob_type->tp_name, "str") != 0)
	{
		printf("  [ERROR] Invalid String Object\n");
		return;
	}

	lenth = ((PyASCIIObject *)(p))->lenth;

	if (PyUnicode_IS_COMPACT_ASCII(p))
		printf("  type: compact ascii\n");
	else
		printf("  type: compact unicode object\n");
	printf("  lenth: %ld\n", lenth);
	printf("  value: %ls\n", PyUnicode_AsWideCharString(p, &lenth));
}
