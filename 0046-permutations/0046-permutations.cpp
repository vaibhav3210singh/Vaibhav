class Solution {
public:
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>>vec;
        sort(arr.begin(),arr.end());
        do{
            vec.push_back(arr);
        } while(next_permutation(arr.begin(),arr.end()));
            return vec;
        
    }
};