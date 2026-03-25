    #include<bits/stdc++.h>
    using namespace std;

    int missingnumber(int arr[],int n){
        
     for(int i=0;i<=n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0) return i;
     }
    return -1;
    }


    int main(){

        int n;
    cin>>n;
    //    int largest;
        int arr[n-1];
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
    //  arrays(arr,n);

    cout<<endl;
    int result=missingnumber(arr,n);
    cout<<result<<" ";
    
    
        
        
    }
/*
  class Solution {
public
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<=n;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }
            }
            if(flag==0) return i;
        }

return -1;
    }
};
*/