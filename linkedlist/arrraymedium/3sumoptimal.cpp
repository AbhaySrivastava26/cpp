#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>ThreesumBetter(vector<int>&nums,int n){
    sort(nums.begin(),nums.end());

    // int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
           
if(i>0 && nums[i]==nums[i-1]) continue;
int j=i+1;
int k=n-1;
while(j<k){
int sum=nums[i]+nums[j]+nums[k];
if(sum<0){
    j++;
}else if(sum>0){
    k--;
}else{
    vector<int>temp={nums[i],nums[j],nums[k]};
    ans.push_back(temp);


    j++;
    k--;
    while(j<k &&nums[j]==nums[j-1]) j++;
    while(j<k && nums[k]==nums[k+1]) k--;
}
}

    }
return ans;

}


//Time Complexity =Big O(N^2+Log(M))
//Space COmplexity bigO(N)+O(no of elements in Set)

int main(){
int n;
cin>>n;
vector<int>nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}




vector<vector<int>>result=ThreesumBetter(nums,n);

for(const auto& triplet:result){
    for(int num:triplet){
        cout<<num<<" ";
    }
}

}