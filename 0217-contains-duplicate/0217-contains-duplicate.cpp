class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        map<int,int>hash;
        for(int i=0;i<arr.size();i++){
            hash[arr[i]]++;
            
        }
        for(auto it : hash){
            if(it.second>=2){
                return true;
            }
        }
       return false; 
    }
};