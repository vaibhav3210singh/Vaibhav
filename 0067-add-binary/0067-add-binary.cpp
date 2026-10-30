class Solution {
public:
    string addBinary(string a, string b) {

//   if(a=="0" && b=="0"){
//     return "0";
//   }
       

// int num1 = 0;

// for(char c : a) {
//     num1 = num1 * 2 + (c - '0');
// }

// int num2 = 0;

// for(char c : b) {
//     num2 = num2 * 2 + (c - '0');
// }


//         // int first = stoi(a);
//         // int second = stoi(b);
//         int n = num1+num2;
       
        
//          string binary = "";

//         while(n > 0) {
//          binary += (n % 2) + '0';
//         n = n / 2;
//        }

//           reverse(binary.begin(), binary.end());

//         return binary;
int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        
        string ans = "";
        
        while(i >= 0 || j >= 0 || carry) {
            
            int sum = carry;
            
            if(i >= 0)
                sum += a[i--] - '0';
            
            if(j >= 0)
                sum += b[j--] - '0';
            
            ans += (sum % 2) + '0';
            
            carry = sum / 2;
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};