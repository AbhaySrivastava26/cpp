// class Solution {
//     public:
//         int sumOfTheDigitsOfHarshadNumber(int x) {
//             int sum=0;
//             int temp=x;
//             int last_digit=0;
//             while(x>0){
//                 last_digit=x%10;
//                 sum+=last_digit;
//                 x=x/10;
                
//             }
//             if(temp%sum==0) {
//             return sum;
//             }
//             return -1;
//         }
//     };