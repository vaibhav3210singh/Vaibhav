class Solution {
public:
    int thirdMax(vector<int>& nums) {
    //     int n=nums.size();
    //     int second ;
    //   sort(nums.begin(),nums.end());
    //   if(n<3){
    //     return nums[n-1];
    //   }
    //   else{
    //     int count =1;
        
    //     for(int i=n-1;i>0;i--){
    //         if(nums[i]!=nums[i-1] && count != 3){
    //             second=nums[i-1];
    //             count++;
    //         }
    //     }
    //   }
    //   return second;

     int n=nums.size();
      int count =1;
        int third ;
      sort(nums.begin(),nums.end());
       for(int i=n-1;i>0;i--){
         if(nums[i]!=nums[i-1]){
            count ++;

         }
         if(count ==3){
           third=nums[i-1];
           return third;
         }
       }
    
   return nums[n-1];
    }
};