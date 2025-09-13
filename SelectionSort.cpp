#include<iostream>
using namespace std;

// Swapping two integer values using pointers
void swap(int* a, int* b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Selection sort using pointers
void selection_sort(int* a, int elements) 
{
    for (int i = 0; i < elements - 1; i++) 
    {
        int* min_ptr = a + i;
        for (int j = i + 1; j < elements; j++) 
        {
            if (*(a + j) < *min_ptr) 
            {
                min_ptr = a + j;
            }
        }
        if (min_ptr != (a + i)) 
        {
            swap(min_ptr, a + i);
        }
    }
}

int main() 
{
    int no_el;
    cout << "How many elements in your array?" << endl;
    cin >> no_el;

    int arr[no_el];
    cout << "Enter " << no_el << " Elements:" << endl;
    for (int i = 0; i < no_el; i++) 
    {
        cin >> arr[i];
    }

    selection_sort(&arr[0], no_el);

    cout << "Sorted Array: ";
    for (int i = 0; i < no_el; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
