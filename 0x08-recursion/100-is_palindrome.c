#include <string.h>
#include "main.h"

int is_palindrome_helper(char *s, int start, int end);
/**
 * is_palindrome - lol
 * @s: idfk
 * Return: an int
*/
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);
	return (is_palindrome_helper(s, 0, len - 1));
}
/**
 * is_palindrome_helper - hello
 * @s: string
 * @start: lol
 * @end: whatever
 * Return: IDC
*/
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
