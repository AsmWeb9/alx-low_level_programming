#include "lists.h"

/**
 * myConstructor - executes before main()
 * Return: void
 */
void myConstructor(void) __attribute__((constructor));
void myConstructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
