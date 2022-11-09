/**
 * print_name - prints a name
 *
 * @name: name to be printed
 * @f: function to print the name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}