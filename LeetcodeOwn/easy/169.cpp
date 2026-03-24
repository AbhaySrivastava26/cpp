#include<iostream>
#include<vector>
#include<map>


using namespace std;

// int majority( vector<int>& arr){
//     int start=0;
//     for(int i=0;i<arr.size();i++){
//         int count=0;
//         for(int j=0;j<arr.size();j++){
//             if(arr[j]==arr[i]){
//                   count++;
//             }
//             if(count>arr.size()/2){
//                 return arr[i];
//             }
//         }

//     }
//     return -1;
// }

int majority( vector<int>& nums){
map<int,int>mp;
for(int i=0;i<nums.size();i++){
    mp[nums[i]]++;
}
for(int j=0;j<nums.size();j++){
    if(mp[nums[j]]>nums.size()/2){
        return nums[j];
    }
}
return -1;

}


int main(){

    int n,temp;
    // map<int,int>mp;
    vector<int>arr;
    cout<<"enter the n value"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
        
    }

    int result=majority(arr);
    cout<<result<<endl;

}