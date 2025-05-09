#include<bits/stdc++.h>
using namespace std;


int main(){
int ans;
int n;
cin>>n;
int nums[n];
for(int i=0;i<n;i++){
    cin>>nums[i];
}
unordered_map<int,int>hs;

for(int i=0;i<n;i++){
    hs[nums[i]]++;
}

for(auto it:hs){
    if(it.second>n/2){
        ans=it.first;
    }
}
 cout<<ans<<" ";


}