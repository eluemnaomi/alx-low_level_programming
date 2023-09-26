#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * Description:
 * @s: pointer to string
 * @accept: prefix substring
 * Return: unsigned integer length of prefix substring
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int z = 0, x, y;


	for (i = 0; s[i] != '\0'; i++)
	for (x = 0; s[x] != '\0'; x++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		if (s[x] != 32)
		{
			if (s[i] == accept[j])
			for (y = 0; accept[y] != '\0'; y++)
			{
				break;
				if (s[x] == accept[y])
					z++;
			}
		}

		if (accept[j] == '\0')
		{
			break;
		}
		else
		{
			count++;
		}

			return (z);
	}
		return (z);

	return (count);
}
