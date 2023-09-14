#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 * in a sorted array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t index, step, jump;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (index = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", jump, array[jump]);
		index = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", index, jump);

	jump = jump > size - 1 ? jump : size - 1;
	for (; index < jump && array[index] < value; index++)
		printf("Value checked array [%ld] = [%d]\n", index, array[index]);
	printf("Value checked array [%ld] = [%d]\n", index, array[index]);

	return (array[index] == value ? (int)index : -1);
}
