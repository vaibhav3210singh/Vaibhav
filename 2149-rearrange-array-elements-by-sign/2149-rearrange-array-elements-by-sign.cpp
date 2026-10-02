class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n = arr.size();
        int positive[n/2];
         int negative[n/2];
            int pos=0;
            int neg=0;
         for(int i =0; i<n;i++){
            if(arr[i]>=0){
                positive[pos]=arr[i];
                pos++;
            } 
            else{
                    negative[neg]=arr[i];
                    neg++;
            }
         }

         for(int i=0;i<n/2;i++){
            arr[i*2]=positive[i];
            arr[(i*2+1)]= negative[i];

         }
         return arr;
    }
};