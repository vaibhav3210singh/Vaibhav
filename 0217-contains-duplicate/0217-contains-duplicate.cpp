class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
    //     map<int,int>hash;
    //     for(int i=0;i<arr.size();i++){
    //         hash[arr[i]]++;
            
    //     }
    //     for(auto it : hash){
    //         if(it.second>=2){
    //             return true;
    //         }
    //     }
    //    return false; 

    sort(arr.begin(),arr.end());
    for(int i=1 ; i<arr.size();i++){
        if(arr[i]==arr[i-1]){
            return true;
        }
    }
    return false;
    }
};