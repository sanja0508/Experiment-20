#include<iostream>
using namespace std;

void swap(int* a, int* b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int elements;
    
    cout << "How many elements in the array? : ";
    cin >> elements;
    
    int array[elements];
  
    cout << "Enter elements:" << endl;
    for (int i = 0; i < elements; i++) 
    
        cin >> array[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < elements; i++) {
      
        cout << array[i] << " ";
    }
    cout << endl;

    // Bubble Sort: Sorting the array in ascending order
    int n = 0;
    while (n < elements) 
    {
        for (int i = 0; i < elements - n - 1; i++)
          {
            if (array[i] > array[i + 1]) 
            {
                swap(&array[i], &array[i + 1]);
            }
        }
        n++;
    }

    // Display the sorted array
    cout << "\nSorted array is:" << endl;
    for (int i = 0; i < elements; i++) 
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
