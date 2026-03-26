    #include<bits/stdc++.h>
    using namespace std;

  void leftrotatearrayop(int arr[],int n){
      
      int temp=arr[0];
      for(int i=1;i<n;i++){
        arr[i-1]=arr[i];

      }
    //   int roarray=0;
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
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

    cout<<endl;
    leftrotatearrayop(arr,n);
    // cout<<result<<" ";
    
    
        
        
    }