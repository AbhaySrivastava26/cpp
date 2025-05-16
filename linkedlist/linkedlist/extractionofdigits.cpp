#include<iostream>
#include<climits>
#include <bits/stdc++.h>

using namespace std;

void extraction(int n){
    int count =0;
while(n>0){

   int  last_digit=n%10;
   count+=1;

n=n/10;
}
cout<<count<<endl;
}

void revnum(int n){
    int rev=0;
while(n>0){

   int  last_digit=n%10;
   

n=n/10;
rev=(rev*10)+last_digit;
}
cout<<rev;
}
  

  void evendivcount(int n){
     
        
        int even=0,original=n;
        while(n>0){
             
             int last_digit=n%10;
             if(last_digit!=0 && original % last_digit==0){
                 even+=1;
             }
             
             n=n/10;
            
            
            
        }
        cout<<even;
  }
int  reverseM(int n){

     int reverse=0;
     while(n!=0){
    int last_digit=n%10;
    n/=10;
    if(reverse >INT_MAX/10|| reverse==INT_MAX/10 && last_digit> 7) return 0;
    if( reverse <INT_MIN/10 || reverse==INT_MIN/10 && last_digit <8) return 0;
    reverse=(reverse*10)+last_digit;



     }

return reverse;



}

   bool palindrome(int x){
          int rev=0,last_digit=0;
           int temp=x;
         while(x>0){
     int last_digit=x%10;
      x/=10;
      if(rev>INT_MAX/10  || rev==INT_MAX && last_digit>7  ) return 0 ;
      if(rev<INT_MIN/10  || rev==INT_MIN && last_digit <8  ) return 0 ;

       rev=(rev*10)+last_digit;
        
         }
         if(temp==rev){
            return true;
         }else{
            return false;
         }
   }

bool checkArmstrong(int n){
	//Write your code here
      int sum=0;
	  int temp=n;
	  
	  int last_digit=0;
int digits=0;
while(n!=0){
	n/=10;
	digits++;
}
 n=temp;
	  while(n!=0){

      last_digit=n%10;
	  sum=sum+ pow(last_digit,digits);
	  n/=10;





	  }
	  if(sum==temp)
	  return true;
	  else
	   return false;






}
//dynamically allocated memory 
int* printDivisors(int n, int &size){
// Write your code here
int *divisor =new int[n];
size=0;
 int i;
   for(i=1;i<=n;i++){
     if(n %i==0){
      divisor[size++]=i;
     }
   }


return divisor;
}
  void  printDivisors2(int n){
    
int i;
vector<int> ls;
   for(i=1;i<=sqrt(n);i++){
     if(n %i==0){
     ls.push_back(i);
      if(n/i!=i){
      ls.push_back(n/i);
      }
     }
   }
sort(ls.begin(),ls.end());
for(auto it:ls ){
    cout<<it<<" ";
}
  }

int gcd(int n1, int n2) {
    int gcdd = 1;  // Initializing gcd to 1, as GCD cannot be smaller than 1.
    for (int i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcdd = i;  // Update gcd when a common divisor is found.
        }
    }
    return gcdd;  // Return the final gcd value.
}
int gcd1(int n1, int n2) {
    int gcdd = 1;  // Initializing gcd to 1, as GCD cannot be smaller than 1.
    for (int i = min(n1, n2); i >=1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcdd = i;  
            break;
        }
    }
    return gcdd;  // Return the final gcd value.
}

int main(){
    int n,size,n1;
    int n2;
    // int count=0;
    // cin>>"enter the integer ";
    cin>>n1>>n2;
    

//  int* divisors = printDivisors(n, size);  

//     cout << "Divisors of " << n << " are: ";
//     for (int i = 0; i < size; i++) {
//         cout << divisors[i] << " ";  
//     }
//     cout << endl;

//     delete[] divisors; 
int s=gcd1(n1,n2);
cout<<s;
  
}