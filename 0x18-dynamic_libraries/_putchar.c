#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *  *_putchar - writes the char to c
 *   *description:IDK
 *    *@c: the char to print
 *     *Return: On success 1 on error -1
 *     */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
