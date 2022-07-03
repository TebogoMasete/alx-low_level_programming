#include <stdiob.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints all Possible different combinations of 3 digits.
 *Return: Always 0 (Success)
 */
int main(void)

{
	int digit1, digit2, digit3;

	for (digit1 = 48, digit2 = 49, digit3 = 50;)
	{
	while  ((digit1 < 56) && (digit2 < 57) && (digit3 < 58))
	{
		putchar(1);
		putchar(2);
		putchar(3);
	if ((digit1 == 55) && (digit2 == 56) && (digit3 == 57))
	{
		putchar('\n');
		digit1++;
		digit2++;
		digit3++;
	{
	else
	}	putchar(44);
		putchar(32);
	if (digit3 < 57)
		digit3++;
	}
	else if ((digit2 < 56) && (digit3 == 57))
		digit3 = 1 + ++digit2;
	}
	else
		digit2 = 1 + ++digit1;
		digit3 = 1 + digit2;
	}
	putchar('\n');
	return (0);
}
