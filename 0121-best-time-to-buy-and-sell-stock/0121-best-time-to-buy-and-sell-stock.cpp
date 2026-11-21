class Solution {
public:
   
    int maxProfit(vector<int>& prices) {
        int count =0;   
  int smaller=prices[0];
        for(int i=1;i<prices.size();i++){
             
           if(prices[i]>smaller){
            count =max(count,prices[i]-smaller);
           
           }
           else{
            smaller=prices[i];
        }
        }
        return count;
    }
};
