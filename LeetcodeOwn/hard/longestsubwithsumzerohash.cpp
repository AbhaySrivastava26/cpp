#include<bits/stdc++.h>
using namespace std;


int LongestSUbarrayWithSumZero(vector<int>&nums){
int maxi=0;
    int n=nums.size();
  map<int,int>mp;
int sum=0;
  for(int i=0;i<nums.size();i++){
    sum+=nums[i];
    if(sum==0){
        maxi=i+1;
    }
    else{
        if(mp.find(sum)!=mp.end()){
            maxi=max(maxi,i-mp[sum]);
        }else{
            mp[sum]=i;
        }
    }
  }
    return maxi;

}


int main(){
int n;

cout<<"enter n value"<<endl;
cin>>n;
vector<int>nums(n);

cout<<"enter elements "<<endl;
for(int i=0;i<n;i++){
    cin>>nums[i];
}

int result=LongestSUbarrayWithSumZero(nums);
cout<<result<<endl;

return 0;


}