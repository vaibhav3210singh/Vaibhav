class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;
        for(int j =0;j<n;j++){
            if(nums[j]!=val){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    nums.resize(i);
    return i;
    }
    
};