#include <python2.7/Python.h>
#include <iostream>
#include <string>

int main(void)
{
	Py_Initialize();
	if(!Py_IsInitialized())
		return -1;
	
	printf("load succeed\n");
}
