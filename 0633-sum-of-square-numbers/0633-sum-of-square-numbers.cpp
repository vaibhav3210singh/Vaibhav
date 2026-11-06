class Solution {
public:
    bool judgeSquareSum(int c) {
       long first= 0;
      int second =int(sqrt(c));
       while(first<=second){
           long number = first*first + second*second;
           if(number == c){
            return true;
           } else if(number<c){
            first++;
           } else{
            second--;
           }
       }
       return false;
    }
};