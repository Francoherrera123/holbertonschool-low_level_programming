#ifndef _function_pointers_h_
#define _function_pointers_h_
#include <stddef.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

int (*get_op_func(char *s))(int, int);

#endif