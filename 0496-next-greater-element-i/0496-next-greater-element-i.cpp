class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        int n=nums1.size();
      for(int i =0;i<n;i++){
           int num=nums1[i];
            int foundnumber=-1;
            int index=-1;
           for(int j=0;j<nums2.size();j++){
                if(nums2[j] == num){
                 
                    index=j;
                    break;
                
                } 
           }
             for(int j = index + 1; j < nums2.size(); j++) {

                if(nums2[j] > num) {
                    foundnumber = nums2[j];
                    break;
                }
            }

            vec.push_back(foundnumber);
        }

        return vec;
    }
};