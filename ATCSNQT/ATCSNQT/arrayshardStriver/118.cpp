#include<iostream>
using namespace std;
int ncr(int n ,int r){
long long res=1;
for(int i=0;i<r;i++){
    res=res*(n-i);
    res=res/(i+1);

}
return res;

}

int pascaltraiangle(int r,int c){

    int res=ncr(r-1,c-1);
    return res;
}

int main(){

 int r=5;
 int c=2;
 int result=pascaltraiangle(r,c);
 cout<<result<<endl;
 return 0;

}