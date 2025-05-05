#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int longestsubarraywithsumk(vector<int>& arr ,int k ){

    int first=0,second=0,sum=0,maxi=0;
    int n=arr.size();
    while(second<n){
        sum+=arr[second];
        while(sum>k && first<second){
            sum-=arr[first];
            first++;
        }
    
    if(sum==k){
        maxi=max(maxi,second-first+1);
    }
   
        second++;
    
}
    return maxi;
}


int main(){
    int k,n;
    cout<<"enter k";
    cin>>k;
    cout<<"enter n";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }



    int res=longestsubarraywithsumk(arr,k);
    cout<<"longest subarray with sum k is :"<<k<<"is "<<res<<endl;
    return 0;
}