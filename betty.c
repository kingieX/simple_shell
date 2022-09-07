#include <stdio.h>
/**
 * main - prints a leap year
 * Return: Always 0 if success
 */
int main(void)
{
	int yr;

	printf("\n Please Enter any number you wish \n ");
	scanf("%d", &yr);

	if ((yr % 400 == 0) || ((yr % 4 == 0) && (yr % 100 != 0)))
		printf("\n %d is a Leap. \n", yr);
	else
		printf("\n %d is not. \n", yr);

	return (0);
}
