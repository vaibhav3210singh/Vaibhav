class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     int profit = 0;
    //     int secondNo;
    //     int firstNo=arr[0];
    //    for(int i=0;i<arr.size();i++){
    //     if(firstNo<arr[i]){
    //         secondNo=arr[i];
    //      int   currprofit = secondNo-firstNo;
    //      profit+=currprofit;
    //         if(secondNo>arr[i+1]){
    //             firstNo=arr[i+1];
    //             secondNo=0;
    //         }
    //     }
    //     else{
    //         firstNo=arr[i];
    //     }
    //    }
    //    return profit; 


      int profit = 0;

        for(int i = 1; i < prices.size(); i++) {

            if(prices[i] > prices[i-1]) {
                profit += prices[i] - prices[i-1];
            }

        }

        return profit;
    }
};