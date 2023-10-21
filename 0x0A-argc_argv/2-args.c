#include <stdio.h>
/**
 * main -  prints all arguments it receives.
 * @argc: int
 * @argv: list
 * Return: Null
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}