// class Solution {
// public:
//     int countEven(int num) {
//         // int count=0;
//       int count = 0;

//         for (int i = 2; i <= num; i++) {
            
//                 int temp = i, digitSum = 0;

//                 while (temp > 0) {
//                     digitSum += temp % 10;
//                     temp /= 10;
//                 }

//                 if (digitSum % 2 == 0) {
//                     count++;
//                 }
            
//         }

//         return count;
//     }
// };