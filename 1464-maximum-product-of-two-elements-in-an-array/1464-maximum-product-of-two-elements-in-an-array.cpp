class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        // sort(arr.begin(),arr.end());
        // int first=arr[n-1]-1;
        // int second =arr[n-2]-1;
        //  return first*second;
        int largest=0;
        int secondlargest=0;
        for(int i=0;i<n;i++){
       if(arr[i]>largest){
        secondlargest=largest;
        largest=arr[i];
        
        }
        else if(arr[i]>secondlargest){
            secondlargest=arr[i];
        }
        }
        return  (secondlargest-1) *(largest-1);
    }
   
};