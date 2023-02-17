#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Prints the last digit of a random number and compares it to
 *              other values
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;
	char message;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		message = "and is greater than 5";
	}
	else if (lastDigit == 0)
	{
		message = "and is 0";
	}
	else
	{
		message = "and is less than 6 and not 0";
	}

	printf("Last digit of %d is %d %s\n", n, lastDigit, message);

	return (0);

}
