// class Solution {
//     public:
//         int minElement(vector<int>& nums) {
//             // vector<int>ans;
//             int mini=INT_MAX;
//             for(int i=0;i<nums.size();i++){
//             int sum=0;
//             int n=nums[i];
//                 while(n>0){
//                     int last_digit=n%10;
//                  sum+=last_digit;
//                     n/=10;
//                 }
//                   mini=min(mini,sum);
//                 // ans.push_back(sum);
//             }
//             return mini;
          
//         }
//     };