// class Solution {
// public:
//     int maxProduct(int n) {
//          vector<int>digits;
//          while(n>0){
//             int lastdigit=n%10;
//             digits.push_back(lastdigit);
//             n/=10;
//          }
//          int maxlen=0,maxi=0;
//          for(int i=0;i<digits.size();i++){
//             for(int j=i+1;j<digits.size();j++){
//                 maxlen=digits[i]*digits[j];
//                 maxi=max(maxlen,maxi);
//             }
//          }
//          return maxi;
//     }
// };