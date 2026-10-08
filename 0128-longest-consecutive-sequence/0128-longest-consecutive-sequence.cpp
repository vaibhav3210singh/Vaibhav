class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if(nums.size()==0){
            return 0;
        }
       sort(nums.begin(),nums.end());
       int count=1;
        int count1=1;
       for(int i =1;i<nums.size();i++){
           if(nums[i]-nums[i-1]==1){
            count++;
        }
        else  if(nums[i]-nums[i-1]==0){
            continue;
        }
        else {
            count1=max(count1,count);
            count=1;
           
        }

       }
       return max(count1,count);
    }
};