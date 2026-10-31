class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int longest=1;
         int n = arr.size();
        if(n==0) return 0;
       
        unordered_set<int>st;
        if(n==0)return 0;
        
        for(int i=0;i<n;i++){
      st.insert(arr[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
               int count = 1;
                int x = it;
                while(st.find(x+1)!=st.end()){
                  count ++;
                  x = x+1;
                }
                longest = max(longest,count);
            }
        }

     return longest;


    //      if(nums.size()==0){
    //         return 0;
    //     }
    //    sort(nums.begin(),nums.end());
    //    int count=1;
    //     int count1=1;
    //    for(int i =1;i<nums.size();i++){
    //        if(nums[i]-nums[i-1]==1){
    //         count++;
    //     }
    //     else  if(nums[i]-nums[i-1]==0){
    //         continue;
    //     }
    //     else {
    //         count1=max(count1,count);
    //         count=1;
           
    //     }

    //    }
    //    return max(count1,count);
    
    }
};