    #include<bits/stdc++.h>
    using namespace std;

  void maxconsecutive(int arr[],int n){
      
   int max=0;
   int other_element=0;
   for(int i=0;i<n;i++){
    if(arr[i]==1){
        max+=1;
        
    }
    if(arr[i]!=1){
        other_element+=1;
    }
   
   }
    cout<<max;
     
    }


    int main(){

        int n;
    cin>>n;
    //    int largest;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    
  
    maxconsecutive(arr,n);
    
    
    
        
        
    }