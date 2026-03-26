// class Solution {
//     public:
//         int differenceOfSum(vector<int>& nums) {
//             int elementsum=0;
//             int digitsum=0;
//             int absdiff=0;
//             for(int i=0;i<nums.size();i++){
//                 elementsum+=nums[i];
//                 int temp=nums[i];
//                 while(temp>0){
//                     digitsum+=temp%10;
//                     temp/=10;
//                 }
               
//                 absdiff=abs(elementsum-digitsum);
//             }
//             return absdiff;
//         }
//     };