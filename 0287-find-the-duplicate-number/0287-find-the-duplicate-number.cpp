class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int repeat;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                repeat=nums[i];
                break;
            }
        }
        return repeat;
    }
};