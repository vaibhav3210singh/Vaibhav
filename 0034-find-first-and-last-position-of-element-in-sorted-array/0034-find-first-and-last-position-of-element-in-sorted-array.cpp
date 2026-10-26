class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        // ISKA OPTIMAL SOLUTION PEST KIYA HU ISKO KHUD SE KRNA H
        int n = arr.size();
    //     int start=-1;
    //     int end =-1;
    //    for(int i=0;i<n;i++){
    //     if(arr[i]==target){
    //         if(start==-1){
    //             start=i;
    //         }
    //         end=i;
    //     }
    //    } int n = arr.size();

        int start = -1;
        int end = -1;

        // First occurrence
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                start = mid;
                high = mid - 1;
            }
            else if (arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // Last occurrence
        low = 0;
        high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                end = mid;
                low = mid + 1;
            }
            else if (arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return {start,end};
       }
    
};