class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int output=0;
       int maax=0;
       for (int i=0;i<nums.size();i++){
        if(nums[i]==1){
            output +=1;
            maax=max(maax,output);
             } 
            else if(nums[i]!=1){
                output =0;
           
        }
       }
       return maax; 
    }
};