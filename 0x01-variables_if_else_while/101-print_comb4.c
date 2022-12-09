#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int ones = '0';
	int te = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (te = '0'; te <= '9'; te++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == te) || (te == hundreds) || (te > ones) || (hundreds > te)))
				{
					putchar(hundreds);
					putchar(te);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' && te == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
