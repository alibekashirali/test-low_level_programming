#include "main.h"
#include <unistd.h>

/**
 * puts_half - Prints the second half of a string
 * @str: String to print
 */

void puts_half(char *str)
{
    int length = 0, i, start;

    while (str[length] != '\0')
        length++;

    start = (length % 2 == 0) ? (length / 2) : ((length + 1) / 2);

    for (i = start; i < length; i++)
        write(1, &str[i], 1);

    write(1, "\n", 1);
}
