class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int lon = 1;
        int count=1;
       for(int i=1;i<nums.size();i++) {
        if(nums[i]>nums[i-1] ){
            count ++;
        } else{
            lon = max(lon,count);
                count=1;
            
        }
            lon = max(lon,count);
       }
       return lon;
    }
};