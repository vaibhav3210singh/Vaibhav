class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int length = m+n;
      vector<int>vec;
      vec.reserve(length);
      int i=0;
      int j=0;
      while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            vec.push_back(nums1[i]);
            i++;
        }
        else{
           vec.push_back(nums2[j]);  
           j++;
        }
      }
      while(i<m){
        vec.push_back(nums1[i]);
            i++;
      }
      while(j<n){
        vec.push_back(nums2[j]);
            j++;
      }
     for(int k = 0; k < length; k++) {
            nums1[k] = vec[k];}
    }
};