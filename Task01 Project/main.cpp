#include "util.h"
#include "sort.h"
#define SIZE 20

int main() {
	int arr[SIZE];

	init(arr, SIZE, -100, 100);
	cout << "Array before: " << convert(arr, SIZE) << endl;

	selected_sort(arr, SIZE);
	cout << "Array after: " << convert(arr, SIZE) << endl;

	return 0;
}