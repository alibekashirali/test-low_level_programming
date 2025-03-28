#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 * Return: Converted integer
 */
int _atoi(char *s)
{
    int sign = 1, result = 0, i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
            if (s[i + 1] < '0' || s[i + 1] > '9')
                break;
        }
        i++;
    }
    return (result * sign);
}
