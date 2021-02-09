#include "holberton.h"
/**
 * _abs - Entry point
 *
 *@n: valor absoluto
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
