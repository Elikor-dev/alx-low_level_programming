#include <unistd.h>

/**
 * _putchar - write the character c to to the stdout
 * @c: the character to print
 * Return: On success 1.
 * on error, -1 is returned, and erron appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
