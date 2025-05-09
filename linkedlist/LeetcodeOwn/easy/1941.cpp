// class Solution {
// public:
//     bool areOccurrencesEqual(string s) {
//       unordered_map<int,int>mp;
//         for(int i=0;i<s.size();i++){
//             mp[s[i]]++;
//         }
//         int count=mp.begin()->second;
//         for(const auto& it:mp){
//             if(it.second!=count){
//                 return false;
//             }
//         }
//             return true;
//     }
// };