#include "util.h"
#include "sort.h"
#define SIZE 10

int main() {
	int arr[SIZE]{0,1,2,3,4,5,6,7,8,9,};

	//init(arr, SIZE, -100, 100);
	cout << "Array before: " << convert(arr, SIZE) << endl;

	selected_sort(arr, SIZE);
	cout << "Array after: " << convert(arr, SIZE) << endl;

	return 0;
}