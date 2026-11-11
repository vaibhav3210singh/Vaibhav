class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // if(n==0) return true;
        // int countzero=0;
        // int left =n;
        // if(flowerbed[0]==0 && flowerbed[1]==0){
        //   left =left -1; 
        //   flowerbed[0]=1;
        //   if(left==0) return true;
        // }else if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0){
        //   left =left -1; 
        //   flowerbed[0]=1;
        //   if(left==0) return true;
        // }
        // for(int i =1;i<flowerbed.size()-1;i++){
        //     if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0 ){
        //      left = left-1;
        //       if(left ==0){
        //          return true;
        //          }
        //          flowerbed[i]=1;
        // }
      
        // }
        // return false;

        int size = flowerbed.size();

        if(n == 0) return true;

        for(int i = 0; i < size; i++) {

            if(flowerbed[i] == 0) {

                if((i == 0 || flowerbed[i-1] == 0) &&
                   (i == size-1 || flowerbed[i+1] == 0)) {

                    flowerbed[i] = 1;
                    n--;

                    if(n == 0) {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};
