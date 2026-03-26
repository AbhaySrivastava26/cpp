// // class Solution {
// //     public:
// //         int numJewelsInStones(string jewels, string stones) {
// //     int count=0;
// //             for(int i=0;i<stones.size();i++){
// //                   for(auto ch:jewels){
// //                     if(ch==stones[i]){
// //                         count++;
// //                     }
// //                   }
// //         }
// //         return count;
// //         }
// //     };

// //using unordered_sert and map but set gives 100% beats

// class Solution {
//     public:
//         int numJewelsInStones(string jewels, string stones) {
//                unordered_set<char>mp(jewels.begin(),jewels.end());
          
//                int count=0;
//                for(auto ch:stones){
//                 if(mp.find(ch)!=mp.end()){
//                  count++;
//                 }
//                }
           
//     return count;
//         }
//     };