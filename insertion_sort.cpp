#include "insertion_sort.h"
#include "display.h"

void insertionSort(int arr[], int size)
{
    int step = 1;
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            displayArray(arr, size, step);
            step++;
        }
        arr[j + 1] = key;
        if (j + 1 != i)
        {
            displayArray(arr, size, step);
            step++;
        }
    }
}