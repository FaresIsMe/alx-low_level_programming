#include "main.h"
#include <string.h>
#include <stdlib.h>

int palindrome_helper(char *s, int L, int);
/**
 * is_palindrome - lol
 * @s: idfk
 * Return: an int
*/
int is_palindrome(char *s)
{
	int L;

	L = strlen(s) - 1;
	return (palindrome_helper(s, L, 0));
}
/**
 * palindrome_helper - hello
 * @s: string
 * @L: lol
 * @i: whatever
 * @to:lol
 * Return: IDC
*/
int palindrome_helper(char *s, int L, int i)
{
	char *to = malloc((L + 1) * sizeof(char));
	for (i = 0; s[i] != '\0'; i++, L--)
	to[i] = s[L];
	to[i] = '\0';
	if (strcmp(to, s) == 0)
	return (1);
	else
	return (0);
} 
