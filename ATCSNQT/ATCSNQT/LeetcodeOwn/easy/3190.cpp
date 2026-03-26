
// Input: nums = [1,2,3,4]

// Output: 3

// Explanation:

// All array elements can be made divisible by 3 using 3 operations:

// Subtract 1 from 1.
// Add 1 to 2.
// Subtract 1 from 4.
// Example 2:

// Input: nums = [3,6,9]

// Output: 0
// class Solution {
//     public:
//         int minimumOperations(vector<int>& nums) {
//             int n=nums.size();
//             int count=0;
//             for(int i=0;i<n;i++){
//                 if(nums[i]%3==0){
//                    continue;
                    
//                 }else{
//                     if((nums[i]+1)%3==0 || (nums[i]-1)%3==0){
//                         count+=1;
//                     }
//                 }
//             }
//             return count;
    
    
//         }
//     };