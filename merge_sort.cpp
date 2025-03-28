#include "merge_sort.h"
#include "display.h"

void merge(int arr[], int left, int mid, int right, int &step)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Dynamically allocate arrays L and R
    int *L = new int[n1];
    int *R = new int[n2];

    // Copy data into temporary arrays
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[mid + 1 + i];
    }

    // Merge the arrays back into arr
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Display the array after merging
    displayArray(arr, right + 1, step);
    step++;

    // Free the dynamically allocated memory
    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right, int &step)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid, step);
        mergeSort(arr, mid + 1, right, step);
        merge(arr, left, mid, right, step);
    }
}