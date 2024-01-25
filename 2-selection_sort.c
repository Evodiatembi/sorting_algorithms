#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
*selection_sort - sorting an array of intgers in ascending order
*@array: the array of integers to be sorted
*@size: the size of the array to be sorted
*/
void selection_sort(int *array, size_t size)
{
size_t a, b;
int min_num;
int temp;
for (a = 0; a < size - 1; a++)
{
min_num = a;
for (b = a + 1; b < size; b++)
if (array[b] < array[min_num])
min_num = b;
{
temp = array[a];
array[a] = array[min_num];
array[min_num] = temp;
}
}
for (a = 0; a < size; a++)
{
print_array(array, size);
printf("\n");
}
}
