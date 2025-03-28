#include "quick_sort.h"
#include "display.h"

int partition(int arr[], int low, int high, int &step)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            if (i != j)
            {
                displayArray(arr, high + 1, step);
                step++;
            }
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    displayArray(arr, high + 1, step);
    step++;
    return i + 1;
}

void quickSort(int arr[], int low, int high, int &step)
{
    if (low < high)
    {
        int pi = partition(arr, low, high, step);
        quickSort(arr, low, pi - 1, step);
        quickSort(arr, pi + 1, high, step);
    }
}