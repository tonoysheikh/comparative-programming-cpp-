#include <bits/stdc++.h>    
using namespace std;
// Swap elements at the pointers
void swap(int* first, int* second)
{
    int value = *first;
    *first = *second;
    *second = value;
}
void printArray(int* arr, int size)
{
    for(int x = 0; x < size; x++)
    {
        cout << arr[x] << " ";
    }
    
}
int main()
{
    int arr[] = {1,2,3,4,2,6};
    int size = sizeof(arr) / sizeof(arr[0]);
   

    for(int x = 0; x < size; x++)
    {
        for(int y = x+1; y < size; y++)
        {
            // Check if it is a duplicate element
            if(arr[x] == arr[y])
            {
                
                swap(arr + x, arr + size -1);
                // Decrement the size of array.
                size--;
                // As duplicate element is shifted to end, so check again
                x--;
                break;
            }
        }
    }
   
    printArray(arr, size);
    return 0;
}