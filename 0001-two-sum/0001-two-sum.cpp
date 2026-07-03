class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n =arr.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            int moreNeeded = target- arr[i];
            if(mpp.find(moreNeeded)!=mpp.end())
              return {mpp[moreNeeded],i};
              mpp[arr[i]]=i;   
        }
        return{};
    }
};