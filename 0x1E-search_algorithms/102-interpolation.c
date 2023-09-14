#include "search_algos.h"

/**
 *interpolation_search - function that  searches
 *for a value in a sorted array of integers
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: the value to search for
 *Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t index, left_value, right_value;

	if (array == NULL)
		return (-1);

	for (left_value = 0, (right_value = size - 1); right_value >= left_value;)
	{
		index = left_value + (((double)(right_value - left_value) / (array[right_value] - array[left_value])) * (value - array[left_value]));
		if (index < size)
		{
			printf("Value checked array [%ld] = [%d]\n", index, array[index]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", index);
			break;
		}

		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right_value = index - 1;
		else
			left_value = index + 1;
	}
	return (-1);

}
