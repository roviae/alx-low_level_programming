#include <stdio.h>

/**
 * main - printing alphabet omitting q and e
 *
 * Return: Always 0 ( Success)
 */
int main(void)
{
	char lower_case_char, e, q;

	e = 'e';
	q = 'q';

	for (lower_case_char = 97; lower_case_char <= 122; lower_case_char++)
	{
		if (lower_case_char != e && lower_case_char != q)
			putchar(lower_case_char);
	}
	putchar(10);

	return (0);
}
