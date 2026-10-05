class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        // string finalmatch="";
        // for(int i = 1;i<strs.size();i++){
        //     string current = strs[i];
        //     string match=finalmatch;
        //    for(int j=0;j<current.length();j++){
        //       if(current[j]==match[j]){
        //         // match = match[j];
        //         finalmatch=finalmatch + match[j];
        //       }
        //       else{
        //         break;
        //       }
        //     }
        // }
        // return match;

        sort(strs.begin(),strs.end());
       string first=strs[0];
       string second =strs[n-1];
       int minlength= min(first.length(),second.length());
       string match="";
       for(int i = 0;i<minlength;i++){
        if(first[i]==second[i]){
            match += first[i];
        }
        else{
            break;
        }
       }
       
      return match;
    }
};