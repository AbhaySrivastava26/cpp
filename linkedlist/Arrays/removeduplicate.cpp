    #include<bits/stdc++.h>
    using namespace std;

    int removedup(int arr[],int n){
      int i=0;
      for(int j=1;j<n;j++){
        if(arr[j]>arr[i]){
            i++;
            arr[i]=arr[j];
        }
      }
      return i+1;
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

    cout<<endl;
    int result=removedup(arr,n);
    cout<<result<<" ";
    
    
        
        
    }