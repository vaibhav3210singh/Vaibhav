// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//      int n = digits.size();
//      long long num =0;
//      for(int i= 0; i<n;i++){
//          num =num*10 + digits[i];                                       MY APPROACH
//      }
//      num = num+1;
//     vector<int>temp;
//      while(num>0){
//         temp.push_back(num%10);
//         num = num/10;
    
//      } 
//      reverse(temp.begin(),temp.end());
//      return temp;
//     }
    
    
// };    


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {

            if(digits[i] < 9) {

                digits[i]++;
                return digits;

            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};