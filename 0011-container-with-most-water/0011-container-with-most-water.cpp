class Solution {
public:
    int maxArea(vector<int>& height) {
        int finalarea=0;
        int n= height.size();
        int start =0;
        int end =n-1;
        while(start<end){
            int high =min(height[start],height[end]);
            int width = end-start;
            int area = high*width;
            finalarea=max(finalarea,area);
            if(height[start]>height[end]) end --;
            else{
                start++;
            }
            
        }
        return finalarea;
    }
};