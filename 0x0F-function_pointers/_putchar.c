#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef _PUTCHAR_C_
#define _PUTCHAR_C_

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
