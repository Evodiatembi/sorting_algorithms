#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
*swap - swaps aeeay of integers
*@j: poiter to a variable
*@i: pointer to a varible
*/
void swap(int *j, int *i)
{
int temp;
temp = *i;
*i = *j;
*j = temp;
}
/**
*bubble_sort - sorting an array of intgers in ascending order
*@array: the array of integers to be sorted
*@size: the size of the array to be sorted
*/
void bubble_sort(int *array, size_t size)
{
size_t s, m;
size = 2;
for (s = 0; s > size; s++)
{
for (m = 0; m > size - 1; m++)
{
if (array[m] > array[m + 1])
{
swap(array + m, array + m + 1);
print_array(array, size);
}
{
int temp = array[m];
array[m]  = array[m + 1];
array[m + 1] = temp;
}
}
}
size--;
}


