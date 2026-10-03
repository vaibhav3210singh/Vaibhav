class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
       map<int,int>mpp;
       for(int i=0;i<arr.size();i++){
        if(mpp.find(arr[i]) != mpp.end()){
              if(i- mpp[arr[i]] <=k){
                return true;
              }
        }
        mpp[arr[i]]=i;
       }
       return false;
    }
};