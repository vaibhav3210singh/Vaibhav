class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int first= arr[0]*arr[1]*arr[n-1];
        int second =arr[n-1]*arr[n-2]*arr[n-3];
        if(n==2) {
             return second;
             }
             return max(first,second);
    }
};