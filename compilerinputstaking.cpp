
#include<bits/stdc++.h>
using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int it:arr){
//         cout<<it;
//     }
// }


// int main(){
//     int n;
//     cin>>n;
// vector<int>arr;
//     for(int i=0;i<n;i++){
//        int val;
//        cin>>val;
//        arr.push_back(val);
//     }
//     for(int it:arr){
//         cout<<it;
//     }
// }



//string 



// int main(){
//     // solve-> ' 1 2 3 4 5 6 7 8 9 ' string to int
//     // stringstream-> '1' '2' '3' ..
//     //arr[]--
//   string s;
//     getline(cin,s);
//     stringstream ss(s);
//     vector<int>arr;
//     int num;
//     while(ss>>num){
//         arr.push_back(num);
//     }
//     for(int it:arr){
//         cout<<it;
//     }



// }

//for comma sperated values "1,2,3,4,5"

// int main(){
 
//   string s;
//     getline(cin,s);
//     stringstream ss(s);
//     vector<int>arr;
//     string temp;
//     //instead of ',' we can write ' ' space seperated values if nums.size is not given 
//     while(getline(ss,temp,',')){
//         int num=stoi(temp);
//         arr.push_back(num);
//     }
//     for(int it:arr){
//         cout<<it;
//     }



// }





int main(){
 //if the question comes first size is given then string is given 
 //there an error comes how to use that 
 int n;
 cin>>n;
 cin.ignore();
 string s;
 getline(cin,s);
 cout<<n<<" "<<s<<endl;


}

//input is in string format and no isze is provided then how to code 