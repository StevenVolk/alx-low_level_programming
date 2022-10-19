#include "main.h"

/** _isalpha - checks if alhpabet, return 1 if so and 0 otherwise
 *
 * Return: 1 for alphabet and 0 for others
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
