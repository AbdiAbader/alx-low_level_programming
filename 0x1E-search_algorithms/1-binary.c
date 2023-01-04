#include "search_algos.h"
int binarySearch(int array[], int x, int low, int high);
void print_array(int *array, int left, int right);
/**
*binary_search - implements binary search in array.
*@array: pointer to array
*@size: size of array
*@value: value to be search
*Return: 1 or -1
*/
int binary_search(int *array, size_t size, int value)
{
if (array == NULL || size < 1)
{
return (-1);
}
return (binarySearch(array, value, 0, size - 1));
}

/**
 *binarySearch - binary search function
 *@array: array
 *@low: lower part of array
 *@high: higher
 *@x: value
 *Return: -1 if not find or the value
 */
int binarySearch(int array[], int x, int low, int high)
{
int mid;
while (low <= high)
{
mid = low + (high - low) / 2;
print_array(array, low, high);
if (array[mid] == x)
return (mid);
if (array[mid] < x)
low = mid + 1;
else
high = mid - 1;
}
return (-1);
}
/**
* print_array - prints the array
* @array: the array
* @left: the left part of the array
* @right: the right side of the array
*/
void print_array(int *array, int left, int right)
{
printf("Searching in array: ");

for (; left < right; left += 1)
{
printf("%d, ", array[left]);
}

printf("%d\n", array[right]);
}
