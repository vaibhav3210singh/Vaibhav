class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int first=arr[n-1]-1;
        int second =arr[n-2]-1;
         return first*second;
    }
   
};