class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        // int maxSum=INT_MIN;
        int sum=0;
     for(int i=0;i<k;i++){
         sum +=nums[i];
     }
     int start=0;
     int maxSum=sum;
     for(int i=k;i<n;i++){
       sum=sum+nums[i]-nums[start];
       maxSum=max(maxSum,sum);
       start++;
     }

     return (double)maxSum/k;
    }
};