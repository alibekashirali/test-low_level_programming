/* 3-get_op_func.c */
#include "3-calc.h"

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

    while (ops[i].op)
    {
        if (*(ops[i].op) == *s && !*(s + 1))
            return (ops[i].f);
        i++;
    }
    return (NULL);
}
