/**
 * _strdup - duplicates a string
 *
 * @str: string to be duplicated
 * Return: points to the new duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *dup;

	dup = malloc(sizeof(str));
	if (dup == NULL || str == NULL)
		return NULL;
	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
