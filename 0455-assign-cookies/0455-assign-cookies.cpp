class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        int greed=0;
        int cookies =0;
        while(g.size()>greed && s.size()>cookies){
            if(g[greed] <= s[cookies]){
                count++;
                greed++;
                cookies++;
            } else{
                cookies++;
            }

        }
       return count; 
    }
};