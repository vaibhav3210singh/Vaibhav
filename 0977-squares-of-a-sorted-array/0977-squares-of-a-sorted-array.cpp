class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
//         int n=arr.size();
//         int first= 0;
//         int last=n-1;
//         int i =n-1;
//        while(first<=last) {
//       long long leftSquare = 1LL * arr[first] * arr[first];
//    long long rightSquare = 1LL * arr[last] * arr[last];
//          if(leftSquare>rightSquare){
//             arr[i]=leftSquare;
//             first++;
//             i--;
//          } else{
//             arr[i]=rightSquare;
//             last--;
//             i--;
//          }
//        }
//        return arr;

    int n=arr.size();
    for(int i=0; i<n;i++){
        arr[i]=arr[i]*arr[i];
    }
    sort(arr.begin(),arr.end());
    return arr;
    }
};