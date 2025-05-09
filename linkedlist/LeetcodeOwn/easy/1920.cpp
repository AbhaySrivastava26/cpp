// class Solution {
//     public:
//         vector<int> buildArray(vector<int>& nums) {
//             int n=nums.size()+1;
//             for(int i=0;i<nums.size();i++){
//                 nums[i]=nums[i]+n*(nums[nums[i]]%n);
//             }
//             for(int j=0;j<nums.size();j++){
//                 nums[j]=nums[j]/n;
//             }
    
//     return nums;
//         }
//     };
//we can also use two vectors