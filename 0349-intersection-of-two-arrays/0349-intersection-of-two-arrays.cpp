class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        set<int>st;
        vector<int>vec;
        int n1=arr1.size();
        int n2=arr2.size();
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
    int i=0;
    int j=0;
        while(i<n1 && j<n2){
         if(arr1[i]>arr2[j]){
            j++;
         }
         else if(arr1[i]<arr2[j]){
            i++;
         } else{
            st.insert(arr1[i]);
            i++;
            j++;
         }
        }
        for(auto it:st){
            vec.push_back(it);
        }
        return vec;
    }
};