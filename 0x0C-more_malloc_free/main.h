#define MAIN_H
#ifndef MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);
#endif
