#include "display.h"
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void displayArray(int arr[], int size, int step)
{
    cout << "Step " << step << ":" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            cout << "|";
        }
        cout << endl;
    }
    cout << "----------------" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
}