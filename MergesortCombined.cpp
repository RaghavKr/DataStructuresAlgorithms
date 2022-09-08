#include <iostream>
using namespace std;

void merge(int* arr, int start, int middle, int end) {

	int left_size = middle - start + 1;
	int right_size = end - middle;

	int* left_array = new int[left_size];
	int* right_array = new int[right_size];

	for (int x = 0; x < left_size; x++) {
		left_array[x] = arr[x+start];
	}
	for (int y = 0; y < right_size; y++) {
		right_array[y] = arr[middle + 1 + y];
	}

	int i = 0;
	int j = 0;
	int k = start;

	while (k <= end) {
		if (j == right_size) {
			while (i < left_size) {
				arr[k] = left_array[i];
				i++;
				k++;
			}
		}
		else if (i == left_size) {
			while (j < right_size) {
				arr[k] = right_array[j];
				j++;
				k++;
			}
		}
		else if (left_array[i] > right_array[j]) {
			arr[k] = right_array[j];
			j++;
			k++;
		}
		else {
			arr[k] = left_array[i];
			i++;
			k++;
		}
	}

}

void mergesort(int* arr, int start, int end) {

	if (start == end) {
		return;
	}

	int middle = start + ((end - start) / 2);
	mergesort(arr, start, middle);
	mergesort(arr, middle + 1, end);

	merge(arr, start, middle, end);
}

int main() {
	int arr[] = {6, 3, 7, 1, 0, 2, 4, 5};
	mergesort(arr, 0, (sizeof(arr) / sizeof(arr[0])) - 1);

	for (int x = 0; x < 8; x++) {
		cout << arr[x] << ",";
	}

}