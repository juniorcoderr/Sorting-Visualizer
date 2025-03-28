#include <iostream>
#include <cstdlib> // For rand()
#include <ctime>   // For srand(time(0))
#include "display.h"
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "quick_sort.h"
#include "merge_sort.h"
using namespace std;

const int MAX_SIZE = 20;

int main()
{
    int arr[MAX_SIZE];
    int size;
    int choice;

    // Seed the random number generator
    srand(time(0));

    // Get array size from user
    cout << "Enter the size of the array (1 to " << MAX_SIZE << "): ";
    cin >> size;

    // Validate size
    if (size <= 0 || size > MAX_SIZE)
    {
        cout << "Invalid size! Using default size of 5." << endl;
        size = 5;
    }

    // Fill array with random positive integers (1 to 10)
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % 10) + 1;
    }

    // Show initial array
    cout << "Initial Array:" << endl;
    displayArray(arr, size, 0);

    // Menu for sorting algorithm
    cout << "Choose a sorting algorithm:" << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Insertion Sort" << endl;
    cout << "4. Quick Sort" << endl;
    cout << "5. Merge Sort" << endl;
    cout << "Enter your choice (1 to 5): ";
    cin >> choice;

    cout << "Sorting..." << endl;

    // Run the chosen algorithm
    int step = 1; // For Quick Sort and Merge Sort
    if (choice == 1)
    {
        bubbleSort(arr, size);
    }
    else if (choice == 2)
    {
        selectionSort(arr, size);
    }
    else if (choice == 3)
    {
        insertionSort(arr, size);
    }
    else if (choice == 4)
    {
        quickSort(arr, 0, size - 1, step);
    }
    else if (choice == 5)
    {
        mergeSort(arr, 0, size - 1, step);
    }
    else
    {
        cout << "Invalid choice! Using Bubble Sort by default." << endl;
        bubbleSort(arr, size);
    }

    // Show sorted array
    cout << "Sorted Array:" << endl;
    displayArray(arr, size, -1);

    cout << "Press Enter to exit..." << endl;
    cin.ignore(); // Clear previous input
    cin.get();    // Wait for Enter

    return 0;
}