// class Solution {
//     public:
//         int countDigits(int num) {
//            int count=0;
//            int divisibility=num;
//            while(num>0){
//             int last_digit=num%10;
    
//             if(divisibility%last_digit==0){
//                 count++;
//             }
//             num=num/10;
//            } 
    
//            return count;
//         }
//     };