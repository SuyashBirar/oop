#include <iostream> 
using namespace std; 
 
template <typename T> 
void selectionSort(T arr[], int size) 
{ 
    for (int i = 0; i < size - 1; ++i) 
    { 
        int minIndex = i; 
 
        // Find the index of the minimum element in the unsorted part of the array 
        for (int j = i + 1; j < size; ++j) 
        { 
            if (arr[j] < arr[minIndex]) 
            { 
                minIndex = j; 
            } 
        } 
 
        // Swap the found minimum element with the first element 
        if (minIndex != i) 
            swap(arr[i], arr[minIndex]); 
    } 
} 
 
template <typename T> 
void printArray(T arr[], int size) 
{ 
    for (int i = 0; i < size; ++i) 
    { 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
} 
 
int main() 
{ 
    // Example with integer array 
 
    int intArray[] = {64, 25, 12, 22, 11}; 
    int intArraySize = sizeof(intArray) / sizeof(int); 
 
    cout << "Original Integer Array: "; 
    printArray(intArray, intArraySize); 
 
    selectionSort(intArray, intArraySize); 
 
    cout << "Sorted Integer Array: "; 
    printArray(intArray, intArraySize); 
 
    // Example with float array 
    float floatArray[] = {5.5, 2.2, 1.1, 3.3, 4.4}; 
    int floatArraySize = sizeof(floatArray) / sizeof(float); 
 
    cout << "Original Float Array: "; 
    printArray(floatArray, floatArraySize); 
 
    selectionSort(floatArray, floatArraySize); 
 
    cout << "Sorted Float Array: "; 
    printArray(floatArray, floatArraySize); 
 
    return 0; 
} 