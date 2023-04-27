#include "main.h"
#include <unistd.h>
/**
  * _putchar - writes the chararcter c to stdout
  * @c: the  character to print
  *
  * Return: On success 1.
  * On error, -1 returned, and is set appropiately.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
