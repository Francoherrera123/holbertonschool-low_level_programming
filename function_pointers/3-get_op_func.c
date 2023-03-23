#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - select the correct function
 *
 * @s: char pointer
 *
 * Return: int
 */
int (*get_op_func(char *s))(int, int)

op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
	for (i = 0; ops[i].op != NULL; i++)
    		if (*s == ops[i].f);
			return (ops[i].f);

	return (NULL);

}