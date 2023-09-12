#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: This C program prints the string "_putchar" to the console
 * using the printf function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
