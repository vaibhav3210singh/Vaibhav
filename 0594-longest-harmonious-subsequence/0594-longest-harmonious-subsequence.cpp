class Solution {
public:
    int findLHS(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
          mpp[arr[i]]++;
        }
       int count =0;
        for(auto it : mpp){
          if(mpp.find(it.first+1) != mpp.end() ){
            count = max(count,it.second+mpp[it.first+1]);

          }
        }
        return count;
    }
};