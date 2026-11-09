class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        // unordered_map<int,int>mpp;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        // int count=0;
        // for(auto it : mpp){
        //     if(it.second==1){
        //         count+=it.first;
        //     }
        // }
        // return count;
         int freq[101] = {0};

        for(int num : nums) {
            freq[num]++;
        }

        int sum = 0;

        for(int num = 1; num <= 100; num++) {
            if(freq[num] == 1) {
                sum += num;
            }
        }

        return sum;
    }
};