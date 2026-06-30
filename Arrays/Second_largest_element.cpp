class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int firstmax=arr[0];
        int secmax= -1;
        if(arr.size() == 1) return -1;
        for(int i=1;i<=arr.size()-1;i++){
            if(arr[i]>firstmax){
                secmax=firstmax;
                firstmax=arr[i];
                
            }
            else if(arr[i]<firstmax && arr[i]>secmax){
                secmax=arr[i];
            }
        }
        return secmax;
    }
};