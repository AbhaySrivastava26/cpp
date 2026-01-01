int main(){

    int n;
    cin>>n;


int x=n;
int dig=0;
while(x!=0){
    dig++;
    x/=10;
}

x=n;
int sum=0;
while(x!=0){
  int ld=x%10;
  sum+=pow(ld,dig);
}

if(sum==n){
    cout<<"it is a armstrong number"<<" ";
}else{
    cout<<"not a aarmstrong number";
}
}