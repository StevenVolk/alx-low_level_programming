/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;

	char *chk = (char *)&i;
	if (*chk)
		return (1);
	return (0);
}
