// class Solution {
// public:
//     int lengthAfterTransformations(string s, int t) {
//         int m=1e9+7;
//         vector<int>vc(26,0);
//        for(char &ch :s){
//         vc[ch-'a']++;
//        }
//         for(int count=0;count<t;count++){
//               vector<int>temp(26,0);
//                for(int i=0;i<26;i++){
//                 char ch=i+'a';
//                 int freq=vc[i];

//                 if(ch!='z'){
//                     temp[(ch+1)-'a']=(temp[(ch+1)-'a']+freq)%m;
//                 }else{
//                     temp['a'-'a']=(temp['a'-'a']+freq)%m;
//                      temp['b'-'a']=(temp['b'-'a']+freq)%m;
//                 }
//                }
//                vc=move(temp);
//         }
           
//         int res=0;
//         for(int i=0;i<26;i++){
//             res=(res+vc[i])%m;
//         } 
// return res;
//     }
// };