class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        vector<int> vec;
      int  n1=arr1.size();
       int  n2 =arr2.size();
       int maxiarr=max(n1,n2);
       int minarr=min(n1,n2);
       int i=0;
       int j=0;
      double finalmedian;
           while(i<n1 && j < n2 ){
            if(arr1[i]<arr2[j]){
                vec.push_back(arr1[i]);
                i++;
            }
            else{
                vec.push_back(arr2[j]);
                j++;
            }
        }
        while(i<n1){
             vec.push_back(arr1[i]);
                i++;
        }
        while(j<n2){
             vec.push_back(arr2[j]);
                j++;
        }
        int size =vec.size();
        if(size%2 !=0){
        finalmedian = vec[(size/2)];
        }
        else{
         double  firstmedian = vec[(size/2)-1];
       double secondmedian = vec[size/2];
         finalmedian = (firstmedian + secondmedian)/2;
        }
        return finalmedian;
    }
};