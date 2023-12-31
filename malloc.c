#include "shell.h"

/**
 * _realloc - A function to realloc a pointer to extent memory space
 * @ptr: the pointer to the initial memory space
 * @size: A ptr to the number of elements in initial array
 *
 * Return: A pointer to the new array w/ extended mem space
 */
char **_realloc(char **ptr, size_t *size)
{
	char **new;
	size_t i;

	new = malloc(sizeof(char *) * ((*size) + 10));
	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < (*size); i++)
	{
		new[i] = ptr[i];
	}
	*size += 10;
	free(ptr);
	return (new);
}
