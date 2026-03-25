    #include<bits/stdc++.h>
    using namespace std;

  void leftrotatearray(int arr[],int n,int d){
      
     reverse(arr,arr+d);
     reverse(arr+d,arr+n);
     reverse(arr,arr+n);
        

    }


    int main(){

        int n;
    cin>>n;
    //    int largest;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    int d;
    cin>>d;
    //  arrays(arr,n);

    cout<<endl;
    leftrotatearray(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<result<<" ";
    
    
        
        
    }