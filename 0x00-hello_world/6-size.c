#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Alayws 0 (Sucess)
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizedof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n" sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

