#include <unistd.h>

#include <stdio.h>
/**
 * main - chnages stderr without using printf or put
 *
 * Return: ALways 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
