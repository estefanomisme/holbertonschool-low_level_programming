#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the character which the array will be initialized
 *
 * Return: the a pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arrch;

	while (1)
	{
		arrch = (char *)malloc(size * sizeof(char));
		if (arrch == NULL || (size == 0 && c != '\0'))
		{
			return (NULL);
		}
		while (i < size)
		{
			*(arrch + i) = c;
			i++;
		}
		return (arrch);
	}
}
