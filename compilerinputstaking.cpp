
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





// int main(){
//  //if the question comes first size is given then string is given 
//  //there an error comes how to use that 
//  int n;
//  cin>>n;
//  cin.ignore();
//  string s;
//  getline(cin,s);
//  cout<<n<<" "<<s<<endl;


// }

//input is in string format and no isze is provided then how to code  ex: 1 2 3 4 5
// int main(){
//   string s;
//   getline(cin,s);
//   stringstream ss(s);
//   vector<int>arr;
//   int num;
//   while(ss>>num){
//     arr.push_back(num);
//   }
//   for(int it:arr) cout<<it<<" ";
// }

//comma seperated values aer given 1,2,3,4,5

// int main(){
//     string s;
//     getline(cin,s);
//     vector<int>arr;
//     stringstream ss(s);
//     string temp;
//     while(getline(ss,temp,',')){
//         arr.push_back(stoi(temp));
//     }
//     for(int it:arr) cout<<it<<" ";

// }

//if the array is given as [1,2,3,4,5] then how to convert it 
// int main(){
//     string s;
//     getline(cin,s);
//     s.erase(remove(s.begin(),s.end(),'['),s.end());
//     s.erase(remove(s.begin(),s.end(),']'),s.end());
//     stringstream ss(s);
//     vector<int>arr;
//     string token;
//     while(getline(ss,token,',')){
//         token.erase(remove(token.begin(),token.end(),' '),token.end());
//         arr.push_back(stoi(token));
//     }
//     for(int it:arr) cout<<it<<" ";
// }


//now input is done what if output is given in [1,2,3,4,5] then how to deal with that ?? 
// int main(){
//     vector<int>arr={1,2,3,4};
//      for(int it:arr) cout<<it<<" ";
//      cout<<endl;
//      string s="[";
//      for(int i=0;i<arr.size();i++){
//         s+=to_string(arr[i]);
//         if(i!=arr.size()-1){
//             s+=",";
//         }
//     }
//     s+="]";
//      cout<<s;
// }

//now string of space seperated words  ex: apple banana cherry mango  we need to read this as list/arry of strings (not numbers)
// int main(){
//     string line;
//     getline(cin,line);
//     stringstream ss(line);
//     vector<string>words;
//     string word;
//     while(ss>>word){
//         words.push_back(word);
//     }
//     for(string it:words) cout<<it<<" ";
// }

//now if u get floating number in n deciaml points ex:12.34385845 output must be 12.343
// int main(){
//     double num;
//     cin>>num;
//     cout<<fixed<<setprecision(3)<<num;
//     return 0;
// }

//if input is given rows and colums but data in string then how to convert it into array of 2d 
// int main(){
//     int row=3,col=2;
//     string line;
//     getline(cin,line);
//     line.erase(remove(line.begin(),line.end(),' '),line.end());
//     stringstream ss(line);
//     vector<int>nums;
//     string token;
//     while(getline(ss,token,',')){
//         nums.push_back(stoi(token));
//     }
//     int k=0;
//     vector<vector<int>>matrix(row,vector<int>(col));
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             matrix[i][j]=nums[k++];
//         }
//     }
//     for(auto &r:matrix){
//         for(int x:r) cout<<x<<" ";
//         cout<<endl;
//     }
// }

//for fraction value like "1/2 3/4 "
// then simple we do  
int main(){
string s="1/2 3/4";
// then 
int a,b,c,d;
char ch;
stringstream ss(s);
ss>>a>>ch>>b>>c>>ch>>d;
cout<<a<<b<<c<<d;
}