#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry
 * Return: 1
 */
int main(void)
{
	printf("Size of  a char: %1u byte(s)\n", sizeof(char));
	printf("Size of  a int: %1u byte(s)\n", sizeof(int));
	printf("Size of  a char: %1u byte(s)\n", sizeof(long int));
	printf("Size of  a char: %1u byte(s)\n", sizeof(long long int));
	printf("Size of  a char: %1u byte(s)\n", sizeof(float));
	return (0);
}
