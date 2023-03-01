#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integer
 * @a: The array of integer to be reversed
 * @n: The number of element in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
