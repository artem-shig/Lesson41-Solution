#include "sort.h"

void selected_sort(int* arr, int size) {
	for (int j = 0; j < size - 1; j++)
	{
		int index = j;

		for (int i = index + 1; i < size; i++)
		{
			if (arr[i] < arr[index]) {
				index = i;
			}
		}

		int t = arr[j];
		arr[j] = arr[index];
		arr[index] = t;
	}


}