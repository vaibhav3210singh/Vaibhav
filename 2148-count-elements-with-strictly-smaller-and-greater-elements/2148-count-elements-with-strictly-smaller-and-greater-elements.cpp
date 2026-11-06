class Solution {
public:
    int countElements(vector<int>& nums) {
        int n =nums.size();
         int count =0;
        // sort(nums.begin(),nums.end());
       
        //    for(int i =0;i<n-1;i++){
        //     if(nums[i] != nums[0] && nums[i] != nums[n-1]) {
        //         count++;
        //     }
        //     }
        int largest=INT_MIN;
        int smallest=INT_MAX;
        
        for(int i =0;i<n;i++){
            if(nums[i]<smallest){
                smallest=nums[i];
                
            }  if(nums[i]>largest){
                 largest=nums[i];
                
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>smallest && nums[i]<largest){
                count++;
            }
        }
            
        
        return count;
    }
};