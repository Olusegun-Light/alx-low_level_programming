#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Generates random valid passwords for the program 101-crackme.
 * 
 * Return: Always 0.
 */
int main(void)
{
	int keynumber, symbol, checksum;

	srand(time(NULL));
	checksum = 2772;
	keynumber = 0;

	while (keynumber < (checksum - 122))
	{
		symbol = (rand() % (122 - 97 + 1)) + 97;/*to print mostly lowercaseletters*/
		printf("%c", symbol);
		keynumber = keynumber + symbol;
	}

	symbol = checksum - keynumber;
	printf("%c", symbol);

	return (0);
}
