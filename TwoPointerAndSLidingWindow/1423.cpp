// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int lsum=0,rsum=0,maxsum=0;
//         for(int i=0;i<=k-1;i++){
//             lsum+=cardPoints[i];
//         }
//         maxsum=lsum;
//         int rightIndex=cardPoints.size()-1;
//         for(int i=k-1;i>=0;i--){
//             lsum-=cardPoints[i];
//             rsum+=cardPoints[rightIndex];
//             rightIndex--;
//             maxsum=max(maxsum,lsum+rsum);
//         }
//         return maxsum;
//     }
// };