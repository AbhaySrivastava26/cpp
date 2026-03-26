#include<bits/stdc++.h>
using namespace std;


struct T{
    string s,r;
    double amt;
    int time;
};

// int main(){
//     int n;
//     cin>>n;
//     vector<T>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i].s>>arr[i].r>>arr[i].amt>>arr[i].time;
//     }
//     vector<bool>fraud(n,false);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i].s==arr[j].s&& arr[i].r==arr[j].r && arr[i].amt==arr[j].amt&& abs(arr[i].time-arr[j].time)<=60){
//                 fraud[i]=fraud[j]=true;
//             }
//         }
//     }
//     cout<<"Fraud Transactions"<<endl;
//     for(int i=0;i<n;i++){
//         if(fraud[i]){
//             cout<<arr[i].s<<" ";
//             cout<<arr[i].r<<" ";
//             cout<<arr[i].amt<<" ";
//             cout<<arr[i].time<<" ";
//         }
//         cout<<endl;
//     }
// }

int main(){
    
string s;
getline(cin,s);
s.erase(remove(s.begin(),s.end(),'['),s.end());
s.erase(remove(s.begin(),s.end(),']'),s.end());
stringstream ss(s);
vector<int>nums;
string num;
while(getline(ss,num,',')){
    nums.push_back(stoi(num));
}
for(int it:nums) cout<<it<<" ";
}