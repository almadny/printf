#include <unistd.h>
/**
 * _putchar- Prints a single character to stdout
 * @c: Character that will be printed
 *
 * Return: An integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
