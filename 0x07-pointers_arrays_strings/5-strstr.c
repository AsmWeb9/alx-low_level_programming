#include "main.h"
/**
 * _strstr - The _strstr() function finds the
 * first occurrence of the substring needle
 * in the string haystack. The terminating
 * null bytes (\0) are not compared
 * @haystack: point to a string
 * @needle: point to a string
 * Return: The _strstr() function finds the first
 * occurrence of the substring needle in the
 * string haystack. The terminating null bytes (\0)
 * are not compared
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);
	
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *pattern = needle;
		
		while (*pattern != '\0' && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		
		if (*pattern == '\0')
			return (start);
		haystack = start + 1;
	}
	return (NULL);
}
