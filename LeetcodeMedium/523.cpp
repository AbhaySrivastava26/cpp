// class Solution {
//     public:
//         bool checkSubarraySum(vector<int>& nums, int k) {
//             for(int i=0;i<nums.size();i++){
//             int sum=0;
//             int count=0;
//                 for(int j=i;j<nums.size();j++){
//                          sum+=nums[j];
//                          count++;
//                          if(sum%k==0 && count>=2){
//                             return true;
                        
//                          }
//                 }
//             }
//     return false;
//         }
//     };
//BRUTEEEEEEEEEEEEEEEEE FORCEEEEEEEEEEEE APPROACHHHHHHHHH



//optimal

// class Solution {
//     public:
//         bool checkSubarraySum(vector<int>& nums, int k) {
//             int n=nums.size();
//             int sum=0;
//         unordered_map<int,int>mp;
//         mp[0]=-1;
//         for(int i=0;i<n;i++){
//             sum+=nums[i];
//             int remainder=sum%k;
//             if(mp.find(remainder)!=mp.end()){
//                 if(i-mp[remainder]>=2){
//                     return true;
//             }
//                 }else{
//                     mp[remainder]=i;
//                 }
//         }
//         return false;
//         }
//     };