// class Solution {
//     public:
//         int smallestRangeI(vector<int>& nums, int k) {
//             int maxi=nums[0];
//             int mini=nums[0];
//             for(int i=1;i<nums.size();i++){
                
//                 maxi=max(maxi,nums[i]);
//                 mini=min(mini,nums[i]);
//             }
//     if((maxi-mini)-(2*k)<=0 ) return 0;
//     return (maxi-mini)-(2*k);
    
//         }
//     };