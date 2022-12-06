#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - prints list of python info
 * @p: PyObject
 */
void print_python_list_info(PyObject *p)
{
	Py_ssize_t i;
	PyListObject *list;
	PyObject *item;

	list = (PyListObject *) p;
	size = Py_SIZE(p);
	printf("[*] Szize of the Python List = %ld\n", (int) size);
	printf("[*] Allocated = %ld\n", (int) list->allocated);

	for (i = 0; i < Py_SIZE(list); i++)
	{
		item = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", (int) i, Py_TYPE(item)->tp_name);
	}
}
