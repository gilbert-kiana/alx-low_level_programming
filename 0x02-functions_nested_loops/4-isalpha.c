#include "main.h"

/**
 * _isalpha - check for uppercase letters
 * @c: character to be checked
 *
 * Return: 1 if character is a letter,0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') ||
(c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
