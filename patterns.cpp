#include<iostream>
using namespace std;

    void print(int n){
    
    // cin>>n;
    int i,j;
    for(i=0;i<=n;i++){
        for(j=n;j>=n;j--){
            cout<<"*";

        }
        cout<<endl;
    }
}
void print4(int n){
    
    // cin>>n;
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            cout<<i<<" ";

        }
        cout<<endl;
    }
}
 void print3(int n){
    
    // cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<j <<" ";

        }
        cout<<endl;
    }
}
  

    void print1(int n){
    
    // cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}

   void print2(int n){
    
    // cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}

void print5(int n){
    
    // cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=1;j<n-i+1;j++){
            cout<<"* ";

        }
        cout<<endl;
    }
}
void print6(int n){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=1;j<=n;j++){

        }
    }
}
void print7(int n){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=1;j<=n-i-1;j++){
            cout<<" ";
        }
          for(j=1;j<=2*i+1;j++){
            cout<<"*";
          }
          for(j=1;j<=n-i-1;j++){
            cout<<" ";
          }
        cout<<endl;
    }
}
void print8(int n){
     int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
          for(j=0;j<2*i+1;j++){
            cout<<"*";
          }
          for(j=0;j<n-i-1;j++){
            cout<<" ";
          }
        cout<<endl;
    }
}
 void print9(int n){
         int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
          for(j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
          }
          for(j=0;j<i;j++){
            cout<<" ";
          }
        cout<<endl;
    }
 }
 void print10(int n){
         int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
          for(j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
          }
          for(j=0;j<i;j++){
            cout<<" ";
          }
        cout<<endl;
    }
 }
   
   
 

int main(){
    int n;
cin>>n;
print10(n);

}
