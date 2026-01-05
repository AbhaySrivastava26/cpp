// class Solution {
// public:
//     long long maxMatrixSum(vector<vector<int>>& matrix) {
//         long long sum=0;
//         int isnegative=0;
//         int mini=INT_MAX;
//         for(int i=0;i<matrix.size();i++){
//             for(int j=0;j<matrix[i].size();j++){
//                 if(matrix[i][j]<0){
//                     isnegative++;
                  
//                 }
//                     mini=min(abs(matrix[i][j]),mini);
//                 sum+=abs(matrix[i][j]);
//             }
//         }
//         if(isnegative%2==0) return sum;
//         else return sum-2*mini;
//     }
// };;