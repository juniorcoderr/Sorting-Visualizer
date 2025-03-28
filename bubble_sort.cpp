#include "bubble_sort.h"
#include "display.h"

void bubbleSort(int arr[], int size)
{
    int step = 1;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                displayArray(arr, size, step);
                step++;
            }
        }
    }
}