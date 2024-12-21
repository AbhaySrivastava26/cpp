#include<bits/stdc++.h>

using namespace std;
int LongestConsecutive(int arr[],int n){

       if(n==0) return 0;
       sort(arr.begin(),arr.end());
        int longest=1;
        int cnt=1;
        for(int i=0;i<n-1;i++){
           int x=arr[i];
          
           if(arr[i+1]==x+1){
            cnt++;
            longest=max(longest,cnt);

           }else if(arr[i]!=x){
            cnt=1;
           }

        }
return longest;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int result=LongestConsecutive(arr,n);
cout<<result;


}