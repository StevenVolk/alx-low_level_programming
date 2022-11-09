/**
 * array_iterator - executes a function given as a parameter on each elemen
 *
 * @size: size of the array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	while (i < size)
	{
		action(array[size]);
		i++;
	}
}
