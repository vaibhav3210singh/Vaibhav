class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        // if(n<=2){
        //     return -1;
        // }
      int largest=nums[0];
      int smallest=nums[0];
      for(int i=1;i<n;i++){
        if(nums[i]>largest){
            largest=nums[i];
        }else if(nums[i]<smallest){
            smallest=nums[i];
        }
      }
      for(int i=0;i<n;i++){
        if(nums[i] != smallest && nums[i] != largest){
            return nums[i];
        }
      }
       return -1;  
    }
};