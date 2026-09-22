class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int index;
       for(int i =0;i<arr.size();i++){
            if(arr[i]==target){
                index = i;
                break;
            }
            else if(arr[i]>target) {
                index = i;
                break;
            }
        }
        return index;
    }
};