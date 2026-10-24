class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n=arr.size();
        int total=0;
       for(int i=0;i<n;i++){
         total+=arr[i];
          }
          int currSum=0;
          for(int j=0;j<n;j++){
            
            if(currSum == (total-(currSum+arr[j]))){
            return j;}
            currSum+=arr[j];
          } 
          return -1;
    }
};