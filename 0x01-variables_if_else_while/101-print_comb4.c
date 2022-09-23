#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int huns, tens, units, i, j;
	int _i, _j;

	i = _i = '1';
	j = _j = '2';
	for (huns = '0'; huns <= '9'; huns++)
	{
		for (tens = i; tens <= '9'; tens++)
		{
			for (units = j; units <= '9'; units++)
			{
				putchar(huns);
				putchar(tens);
				putchar(units);
				if (huns == '7' && tens == '8' && units == '9')
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		_j++;
		j = _j;
	}
	putchar('\n');
	return (0);
}
