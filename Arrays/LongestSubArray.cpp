    #include<bits/stdc++.h>
    using namespace std;

    int LongestSubArrayy(int arr[],int n,int k){
      int temp=0;
   
      for(int i=0;i<n;i++){
        temp=arr[i]++;
        if(arr[i]==k){
            return arr[i];
            break;
        }
      }
      

    }
    int main(){

        int n;
    cin>>n;
    //    int largest;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    //  arrays(arr,n);
int k;
cin>>k;

    int result=LongestSubArrayy(arr,n,k);
    cout<<result<<" ";
    
    
        
        
    }