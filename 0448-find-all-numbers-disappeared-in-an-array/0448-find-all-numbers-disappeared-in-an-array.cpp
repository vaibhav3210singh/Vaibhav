class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        // vector<int>vec;
        // set<int>st;
        int n=arr.size();
        // for(int i=0;i<n;i++){
        //   st.insert(arr[i]);
        //     }
        //     int number=1;
        // for(auto it : st){
        //    if( it == number && number<=n){
        //     number++;
        //    }  else if(it != number && number<=n){
        //     vec.push_back(number);
        //     number++;
        //    }
        //    else if(it != number && number>n){
        //    break;
        //    }
        // }
   vector<int>vec;
        for(int i=0;i<n;i++){
            int x = abs(arr[i]);
            arr[x-1] = -1 * abs(arr[x-1]);
            
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                vec.push_back(i+1);
            }
        }
        return vec;
        
    }
};