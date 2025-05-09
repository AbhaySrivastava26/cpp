#include<bits/stdc++.h>

using namespace std;


void setrows(int arr[][100],int i,int columns){
for(int j=0;j<columns;j++){
    if(arr[i][j]!=0){
        arr[i][j]=-1;
    }
}
}


void setcolumns(int j,int rows,int arr[][100]){
for(int i=0;i<rows;i++){
    if(arr[i][j]!=0){
        arr[i][j]=-1;
    }
}



}
void  setmatrixzero(int arr[][100],int rows,int columns){

for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){

        if(arr[i][j]==0){
            setrows(arr,i,columns);
            setcolumns(j,rows,arr);
        }
    }
}
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        if(arr[i][j]==-1){
            arr[i][j]=0;
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