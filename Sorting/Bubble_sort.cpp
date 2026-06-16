// | Case                  | Complexity |
// | --------------------- | ---------- |
// | Best Case (optimized) | O(n)       |
// | Average Case          | O(n²)      |
// | Worst Case            | O(n²)      |

// Space complexity 
// O(1)

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if(!swapped)
            break;
    }
}