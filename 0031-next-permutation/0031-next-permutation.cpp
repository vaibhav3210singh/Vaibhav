class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n= arr.size();
       
        int pivotInd=-1;
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
               
                pivotInd = i;
                break;
            }
        }
        if(pivotInd==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        int last;
        int lastInd;
        for(int i = n-1;i>pivotInd;i--){
            if(arr[i]>arr[pivotInd]){
                last = arr[i];
                lastInd=i;
                break;
            }
        }
        swap(arr[pivotInd],arr[lastInd]);
         
        reverse(arr.begin()+ pivotInd+ 1,arr.end());

    
    }
};