class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        vector<int>vec;
        for(auto it:mpp){
            if(it.second<2){
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};