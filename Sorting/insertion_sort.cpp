// | Case                        | Complexity |
// | --------------------------- | ---------- |
// | Best Case (already sorted)  | O(n)       |
// | Average Case                | O(n²)      |
// | Worst Case (reverse sorted) | O(n²)      |

// Space Complexity 
// O(1)

#include <iostream>
using namespace std;
class Solution {
  public:
    void insertionSort(int arr[],int n) {
        // code here
       
        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>0 && arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
                j--;
            }
        }
    }
};