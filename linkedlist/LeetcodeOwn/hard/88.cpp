// // /* The code snippet provided is a C++ class named `Solution` with a method `merge` that takes two
// // vectors of integers `nums1` and `nums2`, along with their respective sizes `m` and `n`. The purpose
// // of this method is to merge the elements of `nums1` and `nums2` into a single sorted vector. */
// // // class Solution {
// // //     public:
// // //         void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
// // //              int n1=nums1.size();
// // //              int n2=nums2.size();
// // //     int i=0,j=0;
// // //     vector<int>ans;
// // //     while(i<m && j<n){
// // //         if(nums1[i]<=nums2[j]){
// // //         ans.push_back(nums1[i]);
// // //         i++;
// // //         }
// // //         else{
// // //         ans.push_back(nums2[j]);
// // //         j++;
    
// // //         }
// // //     }
// // //     while(i<m){
// // //         ans.push_back(nums1[i]);
// // //         i++;
// // //     }
// // //     while(j<n){
// // //         ans.push_back(nums2[j]);
// // //         j++;
// // //     }
// // //     nums1=ans;
// // //         }
// // //     };





// // class Solution {
// //     public:
// //         void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
// //             // [1,3,5,7] [0,2,6,8,9]
// //                int left=m-1;
// //                int right=0;
// //                while(left>=0 && right<n){
// //                 if(nums1[left]>nums2[right]){
// //                     swap(nums1[left],nums2[right]);
// //                     left--;
// //                     right++;
// //                 }else{
// //                     break;
// //                 }
// //                }
// //                sort(nums1.begin(),nums1.begin()+m);
// //                sort(nums2.begin(),nums2.end());
// //      for (int k = 0; k < n; ++k) {
// //                 nums1[m + k] = nums2[k];
// //             }
// //         }
// //     };


// class Solution {
//     public:
//         void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//               int len = m + n;
//             int gap = (len / 2) + (len % 2);
    
//             while (gap > 0) {
//                 int left = 0;
//                 int right = left + gap;
    
//                 while (right < len) {
//                     if (left < m && right < m) {
//                         // Both in nums1
//                         if (nums1[left] > nums1[right]) {
//                             swap(nums1[left], nums1[right]);
//                         }
//                     } else if (left < m && right >= m) {
//                         // left in nums1, right in nums2
//                         if (nums1[left] > nums2[right - m]) {
//                             swap(nums1[left], nums2[right - m]);
//                         }
//                     } else if (left >= m && right >= m) {
//                         // Both in nums2
//                         if (nums2[left - m] > nums2[right - m]) {
//                             swap(nums2[left - m], nums2[right - m]);
//                         }
//                     }
    
//                     left++;
//                     right++;
//                 }
    
//                 if (gap == 1) break;
//                 gap = (gap / 2) + (gap % 2);
//             }
    
//             // Copy remaining elements from nums2 to nums1
//             for (int i = 0; i < n; ++i) {
//                 nums1[m + i] = nums2[i];
//             }
//         }
//     };