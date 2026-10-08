class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
         sort(arr.begin(),arr.end());
       
     int smallest = 1;
     for(int i=0;i<arr.size();i++){
        if(arr[i]>0 && arr[i]==smallest){
            smallest++;
        } else if(arr[i]>0 && arr[i]>smallest){
           return smallest;
        }
     }
     return smallest;
    }
};


 //     int smallest=1;
    //    int smallestIndex=-1;
    //     int n = arr.size();
    //     sort(arr.begin(),arr.end());
    //     for(int i =0;i<n;i++){
    //         if(arr[i]==smallest){
    //             smallestIndex=i;
    //             break;
    //         }
                
    //     }
    //     if(smallestIndex==-1){
    //         return 1;
    //     }
    //     // int missing;
    //     int j =smallestIndex;
    //     for(int i = 1;i<=n;i++){
    //         if(j<n &&arr[j]==i){
    //             j++;
    //         }
    //         else if(j<n &&arr[j]==arr[i-1]){
    //             j++;
    //             i--;
    //         }
    //         else{
    //            return i;
    //         }
    //     }
    //     return n+1;