#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
* get_op_func - executes function
* @s: operator
* Return: op
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
