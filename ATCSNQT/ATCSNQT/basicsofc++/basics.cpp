#include<bits/stdc++.h>
using namespace std;

int main(){
//    vector<int>nums ={1,2,3,4};
//    set<int>st;
//    for(int i=0;i<nums.size();i++){
//     st.insert(nums[i]);
//     cout<<nums[i];
//    }
vector<int>nums;
int n;
cout<<"enter elements you want to push\n";
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cout<<"enter x elements";
    cin>>x;
    nums.push_back(x);
}
// for(auto num:nums){
//     cout<<num<<" ";
// }
// for(int i=0;i<n;i++){
//     cout<<nums[i];
// }
if(find(nums.begin(),nums.end(),10)!=nums.end()){
    cout<<"10 is present";
}

map<int ,int>mp;
for(int i=0;i<n;i++){
    mp[nums[i]]++;
}
// for(auto it=mp.begin(); it!=mp.end();++it){
//     cout<<it->first<<" ->"<<it->second<<endl;

// }
int max_freq=0;
int max_elem=-1;
for(auto it =mp.begin();it!=mp.end();it++){
    if(it->second>max_freq){
        max_freq=it->second;
        max_elem=it->first;
    }
}
cout<<max_elem<<endl;
cout<<max_freq<<endl;

}