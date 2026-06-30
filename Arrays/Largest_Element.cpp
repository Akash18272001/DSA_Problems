class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest=arr[0];
        if(arr.size() == 1) return largest;
        for(int i = 1; i<=arr.size()-1;i++){
            if(arr[i]>=largest){
                largest = arr[i];
            }
        }
        return largest;
    }
};

