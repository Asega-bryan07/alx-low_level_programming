#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <stdlib.h>

int _strlen(char *string);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

int *array_range(int min, int max);
int _putchar(char c);
void * malloc(void *ptr, unsigned int old_size, unsigned int new_size);
eoid print_int(unsigned long int n);

#endif /* MAIN_H */
