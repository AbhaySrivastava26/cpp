#include<bits/stdc++.h>
using namespace std;

int total(vector<int>&nums){
int count=0;
for(int x:nums){
    if(__builtin_popcount(x)>1){
        count++;
    }
}
return count;
}
int main(){
int n;
cin>>n;
vector<int>nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
int ans=total(nums);
cout<<ans;

}