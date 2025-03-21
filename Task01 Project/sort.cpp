#include "sort.h"
// O(N^2)
void selected_sort(int* arr, int size) {
	int count = 0;
	for (int j = 0; j < size - 1; j++)
	{
		int index = j;

		for (int i = index + 1; i < size; i++)
		{
			if (arr[i] < arr[index]) {
				index = i;
			}
			count++;
		}

		if (j != index) {
			int t = arr[j];
			arr[j] = arr[index];
			arr[index] = t;
		}
	}

	cout << "count" << count << endl;
}