#include<bits/stdc++.h>

using namespace std;



void  setmatrixzero(int arr[][100],int rows,int columns){
int column[columns]={0};
int row[rows]={0};
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){

        if(arr[i][j]==0){
            row[i]=1;
            column[j]=1;
        }
    }
}
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        if(row[rows]|| column[columns]){
            arr[rows][columns]=0;
        }
    }
}

  
}
int main(){
int rows,columns;
cin>>rows>>columns;
int arr[100][100];
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
    cin>>arr[i][j];
}
}

setmatrixzero(arr,rows,columns);
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cout<<arr[i][j]<<" ";
     
    }
       cout<<endl;
}


}