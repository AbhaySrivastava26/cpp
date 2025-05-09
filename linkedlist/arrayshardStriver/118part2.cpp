#include<iostream>
using namespace std;
// int ncr(int n ,int r){
// long long res=1;
// for(int i=0;i<r;i++){
//     res=res*(n-i);
//     res=res/(i+1);

// }
// return res;

// }

// int pascaltraiangle (int n){

//     for(int c=1;c<=n;c++){
//         cout<<ncr(n-1,c-1)<<" ";
//     } 
//     cout<<'n';
// }

void pascalTriangle(int n) {
    long long ans = 1;
    cout << ans << " "; // printing 1st element

    //Printing the rest of the part:
    for (int i = 1; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / i;
        cout << ans << " ";
    }
    cout << endl;
}

int main(){

 int r=5;
pascalTriangle(r);

 return 0;

}