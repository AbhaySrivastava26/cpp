// /* The `Solution` class in C++ provides a `merge` method to merge overlapping intervals in a vector of
// vectors and return the merged intervals. */
// /* The class `Solution` in C++ provides a method `merge` to merge overlapping intervals in a vector of
// vectors and return the merged intervals. */
// class Solution {
//     public:
//         vector<vector<int>> merge(vector<vector<int>>& intervals) {
//              sort(intervals.begin(),intervals.end());
//              vector<vector<int>>ans;
//              for(int i=0;i<intervals.size();i++){
//                 int start=intervals[i][0];
//                 int end=intervals[i][1];
//                 if(!ans.empty() && end<=ans.back()[1]){
//                     continue;
//                 }
//                 for(int j=i+1;j<intervals.size();j++){
//                     if(intervals[j][0]<=end){
//                         end=max(end,intervals[j][1]);
//                     }else{
//                         break;
//                     }
//                 }
//                 ans.push_back({start,end});
    
//              }
    
    
    
//              return ans;
    
    
//         }
//     };