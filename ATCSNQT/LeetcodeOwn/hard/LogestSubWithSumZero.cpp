#include<bits/stdc++.h>
using namespace std;


int LongestSUbarrayWithSumZero(vector<int>&nums){
int maxi=0;
    int n=nums.size();
    for(int i=0;i<nums.size();i++){
        int count=0;
        int ans=0;
        for(int j=i;j<nums.size();j++){
            ans+=nums[j];
            count++;
            if(ans==0){
                 maxi=max(maxi,count);
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