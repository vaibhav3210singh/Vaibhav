class Solution {
public:
    int strStr(string haystack, string needle) {
    //     int n = haystack.length();
    //     int m= needle.length();
    //     int index=-1;
    //     string matched="";
    //     int j=0;
    //     int i=0;
    //     while(j<i){
    //         if(haystack[i]==needle[j]){
    //             matched+=needle[j];
    //             if(matched == needle){
    //             index = i-m+1;
    //             break;
    //             }
    //             i++;
    //             j++;
             
    //         } else{
    //             i++;
    //             j=0;
    //         }
            
             
            
        
           
    //     }
    //    return index; 
    
        int n = haystack.length();
        int m = needle.length();

        for (int i = 0; i <= n - m; i++) {
            int j = 0;

            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }

            if (j == m) {
                return i;
            }
        }

        return -1;
    }
};