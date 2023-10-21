#include <stdio.h>
/**
 * main - prints a program name followed by a new line
 * @argc: int
 * @argv: list
 * Return: Null
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
