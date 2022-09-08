// TestingApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
using namespace std;

int splitArr(int arr[], int start, int last) {
    int pivotPosition = arr[start];
    int pivotIndex = 0;

    for (int x = start + 1; x <= last; x++) {
        if (arr[x] <= pivotPosition) {
            pivotIndex++;
        }
    }

    pivotIndex += start;
    swap(arr[pivotIndex], arr[start]);


    while (start < pivotIndex && last > pivotIndex) {

        while (arr[start] <= pivotPosition) {
            start++;
        }

        while (arr[last] > pivotPosition) {
            last--;
        }

        if (start < pivotIndex && last > pivotIndex) {
            swap(arr[start++], arr[last--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int last) {
    if (start >= last) {
        return;
    }

    int split = splitArr(arr, start, last);

    quickSort(arr, start, split-1);
    quickSort(arr, split + 1, last);
}

int main()
{
    //std::cout << "Hello World!\n"; 

    int arr[] = { 9, 3, 4, 2, 1, 8 };
    quickSort(arr, 0, (sizeof(arr)/4) - 1);

    for (int x = 0; x < (sizeof(arr) / 4) ; x++) {
        cout << arr[x] << " ";
    }
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
