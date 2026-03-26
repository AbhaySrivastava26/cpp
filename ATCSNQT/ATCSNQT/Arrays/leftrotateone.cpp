    #include<bits/stdc++.h>
    using namespace std;

  void leftrotatearray(int arr[],int n){
      
      int temp[n];
      for(int i=1;i<n;i++){
        temp[i-1]=arr[i];

      }
    //   int roarray=0;
    temp[n-1]=arr[0];
    for(int i=0;i<n;i++){
       cout<<temp[i]<<" ";
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
    leftrotatearray(arr,n);
    // cout<<result<<" ";
    
    
        
        
    }