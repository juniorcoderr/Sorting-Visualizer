#include "selection_sort.h"
#include "display.h"

void selectionSort(int arr[], int size)
{
    int step = 1;
    for (int i = 0; i < size - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
            displayArray(arr, size, step);
            step++;
        }
    }
}