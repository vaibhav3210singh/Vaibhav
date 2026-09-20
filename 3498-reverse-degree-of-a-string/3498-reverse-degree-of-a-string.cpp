class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            int num=0;
            num = 27- (s[i]-'a'+1);
            sum=sum+num*(i+1);
        }
        return sum;
    }
};