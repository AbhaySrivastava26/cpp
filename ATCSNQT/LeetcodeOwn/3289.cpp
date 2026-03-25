// class Solution {
//     public:
//         vector<int> getSneakyNumbers(vector<int>& nums) {
//             vector<int>dig;
//             for(int i=0;i<nums.size();i++){
//                 int count=0;
//                 for(int j=i;j<nums.size();j++){
//                    if(nums[i]==nums[j]) {
//                     count++;
//                       if(count>1){
//                     dig.push_back(nums[i]);
//                    }
//                    }
                 
//                 }
//             }
//             return dig;
//         }
//     };




//using unordered_map


// class Solution {
//     public:
//         vector<int> getSneakyNumbers(vector<int>& nums) {
//             unordered_map<int,int>mp;
//             vector<int>ans;
//             for(int i=0;i<nums.size();i++){
//                 mp[nums[i]]++;
//             }
//           for(auto& it:mp)
//           if(it.second==2){
//             ans.push_back(it.first);
//           }
//             return ans;
//         }
//     };