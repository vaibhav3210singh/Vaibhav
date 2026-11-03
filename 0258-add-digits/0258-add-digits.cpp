class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
        int count =0;
       while(num>0){
        int reminder = num%10;
        count +=reminder;
        num=num/10;
       } 
       num = count;
        }
        return num;
    }
};