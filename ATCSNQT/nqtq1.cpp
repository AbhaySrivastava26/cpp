// // Problem Statement –

// // A chocolate factory is packing chocolates into the packets. The chocolate packets here represent an array  of N number of integer values. The task is to find the empty packets(0) of chocolate and push it to the end of the conveyor belt(array).

// // Example 1 :

// // N=8 and arr = [4,5,0,1,9,0,5,0].

// // There are 3 empty packets in the given set. These 3 empty packets represented as O should be pushed towards the end of the array

// // Input :

// // 8  – Value of N

// // [4,5,0,1,9,0,5,0] – Element of arr[O] to arr[N-1],While input each element is separated by newline

// // Output:

// // 4 5 1 9 5 0 0 0

// // Example 2:

// // Input:

// // 6 — Value of N.

// // [6,0,1,8,0,2] – Element of arr[0] to arr[N-1], While input each element is separated by newline

// // Output:

// // 6 1 8 2 0 0

// #include<bits/stdc++.h>

// using namespace std;

// vector<int>movezeroestoend(vector<int>&nums){
//     //  int n = nums.size();
//     // vector<int> result;
    
  
//     // for (int i = 0; i < n; i++) {
//     //     if (nums[i] != 0) {
//     //         result.push_back(nums[i]);
//     //     }
//     // }
    
//     // while (result.size() < n) {
//     //     result.push_back(0);
//     // }
    
//     // return result;
//     //without extra space 


//     int n=nums.size();
//     int index=0;
//     for(int i=0;i<n;i++){
//         if(nums[i]!=0){
//             nums[index]=nums[i];
//             index++;
//         }
//     }
//     while(index<n){
//         nums[index]=0;
//         index++;
//     }


// } 


// int main(){
//     int n;
//     cout<<"enter "<<endl;
//     cin>>n;
//     cout<<endl<<"enter n vlues"<<endl;
//     vector<int>nums(n);
//     for(int i=0;i<n;i++){
//        cin>>nums[i];
//     }
//     cout<<"writing logic "<<endl;
//   movezeroestoend(nums);
 
//    for(int x:nums){
//     cout<<x<<" ";
//    }


// }

// TCS NQT Coding Question – September Day 1 – Slot 1
// Problem Statement –
// Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit assignment problems before the lecture. Today he got one tricky question. The problem statement is “A positive integer has been given as an input. Convert decimal value to binary representation. Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer value after toggling all bits”.


// Constrains-

// 1<=N<=100

// Example 1:

// Input :

// 10  -> Integer

// Output :

// 5    -> result- Integer

// Explanation:

// Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence output will print “5”.


// #include<bits/stdc++.h>
// using namespace std;



// int convbits(int n){
//     string res="";
//     while(n>0){
//         if(n%2==1) res+='1';
//         else res+='0';
//         n/=2;

//     }
//     reverse(res.begin(),res.end());
//     string ans="";
//     for(int i=0;i<res.size();i++){
//         if(res[i]=='1'){
//             ans+='0';
            
//         }else{
//             ans+='1';
//         }
//     }

//     int len=ans.size();
//     int num=0;
//     int p2=1;
//     for(int i=len-1;i>=0;i--){
//         if(ans[i]=='1'){
//             num=num+p2;

//         }
//         p2=p2*2;
//     }
//     return num;
// }
// int main(){
//     int n;
//     cout<<"enter n"<<endl;
//     cin>>n;

//     int  res=convbits(n);
//     cout<<res;
// }


// int reversenum(int n){
// string rev="";
// while(n>0){
//   if(n%2==1) rev+="1";
//   else rev+="0";
//   n/=2;
// }
// reverse(rev.begin(),rev.end());
// string ans="";
// for(int i=0;i<rev.size();i++){
//   if(rev[i]=='1') ans+="0";
//   else ans+="1";
// }
// int num=0;
// int p2=1;
// for(int i=ans.size()-1;i>=0;i--){
//   if(ans[i]=='1') num+=p2;
//   p2=p2*2;
// }

// return num;


// }

// int main(){
// int n;
// cin>>n;

// int ans=reversenum(n);
// cout<<ans;

// }



// TCS NQT Coding Question Day 1 Slot 2 – Question 1
// Jack is always excited about sunday. It is favourite day, when he gets to play all day. And goes to cycling with his friends. 

// So every time when the months starts he counts the number of sundays he will get to enjoy. Considering the month can start with any day, be it Sunday, Monday…. Or so on.

// Count the number of Sunday jack will get within n number of days.

//  Example 1:

// Input 

// mon-> input String denoting the start of the month.

// 13  -> input integer denoting the number of days from the start of the month.

// Output :

// 2    -> number of days within 13 days.

// Explanation:

// The month start with mon(Monday). So the upcoming sunday will arrive in next 6 days. And then next Sunday in next 7 days and so on.

// Now total number of days are 13. It means 6 days to first sunday and then remaining 7 days will end up in another sunday. Total 2 sundays may fall within 13 days.

// int main(){
// string s;
// cin>>s;
// cout<<"enter n"<<endl;
// int n;
// cin>>n;
// unordered_map<string ,int>dayIndex={
//     {"sun",1},{"mon",2},{"tue",3}, {"wed",4},
//         {"thu",5}, {"fri",6}, {"sat",7}
// };
// int start=dayIndex[s];
// int firstsunday=(7-start)%7;
// if(firstsunday==0) firstsunday=0;
//     int count=0;
//     if(n>firstsunday){  
//         count=1+(n-(firstsunday+1))/7;
//     }
//     cout<<count;

// }



// A supermarket maintains a pricing format for all its products. A value N is printed on each product. When the scanner reads the value N on the item, the product of all the digits in the value N is the price of the item. The task here is to design the software such that given the code of any item N the product (multiplication) of all the digits of value should be computed(price).

// Example 1:

// Input :

// 5244 -> Value of N

// Output :
// 160 -> Price 

// Explanation:

// From the input above 

// Product of the digits 5,2,4,4

// 5*2*4*4= 160

// Hence, output is 160.

    // int main(){

    //     cout<<"enter n value:"<<endl;
    //     int n;
    //     cin>>n;
    //     int ans=1;
    //     while(n>0){
    //         int temp=n%10;  //5244
    //         ans*=temp;
    //         n/=10;
    //     }
    //     cout<<ans;
    // }

//     A furnishing company is manufacturing a new collection of curtains. The curtains are of two colors aqua(a) and black (b). The curtains color is represented as a string(str) consisting of a’s and b’s of length N. Then, they are packed (substring) into L number of curtains in each box. The box with the maximum number of ‘aqua’ (a) color curtains is labeled. The task here is to find the number of ‘aqua’ color curtains in the labeled box.

// Note :

// If ‘L’ is not a multiple of N, the remaining number of curtains should be considered as a substring too. In simple words, after dividing the curtains in sets of ‘L’, any curtains left will be another set(refer example 1)

// Example 1:

// Input :

// bbbaaababa -> Value of str

// 3    -> Value of L

// Output:

// 3   -> Maximum number of a’s

// Explanation:

// From the input given above.

// Dividing the string into sets of 3 characters each 

// Set 1: {b,b,b}

// Set 2: {a,a,a}

// Set 3: {b,a,b}

// Set 4: {a} -> leftover characters also as taken as another set

// Among all the sets, Set 2 has more number of a’s. The number of a’s in set 2 is 3.

// Hence, the output is 3.

// Example 2:

// Input :

// abbbaabbb -> Value of str

// 5   -> Value of L

// Output:

// 2   -> Maximum number of a’s

// Explanation:

// From the input given above,

// Dividing the string into sets of 5 characters each.

// Set 1: {a,b,b,b,b}

// Set 2: {a,a,b,b,b}

// Among both the sets, set 2 has more number of a’s. The number of a’s in set 2 is 2.

// Hence, the output is 2.

// Constraints:

// 1<=L<=10

// 1<=N<=50

// The input format for testing 

// The candidate has to write the code to accept two inputs separated by a new line.

// First input- Accept string that contains character a and b only

// Second input- Accept value for N(Positive integer number)

// The output  format for testing

// The output should be a positive integer number of print the message(if any) given in the problem statement.(Check the output in Example 1, Example 2

// int main(){
//     string s;
//     cout<<"enter s value:";
//     cin>>s;
//     int L;
//     cout<<"enter L value";
//     cin>>L;
// // int cnt=1;
// // int maxi=0;

// // for(int i=1;i<s.size();i++){
// //     if(s[i]==s[i-1] && s[i]=='a'){
// //         cnt++;
// //     }else if(s[i]!=s[i-1]||s[i]=='b'){
// //         cnt=1;
// //     }
// //     maxi=max(maxi,cnt);
// // }
// // cout<<maxi;
// int maxi=0;
// int n=s.size();
// for(int i=0;i<n;i+=L){
//     int countA=0;
//     for(int j=i;j<i+L &&j<n ;j++){
//         if(s[j]=='a'){
//             countA++;
//         }
//     }
//     maxi=max(maxi,countA);
// }

// cout<<"MAx a value is "<<maxi;



// }

// An international round table conference will be held in india. Presidents from all over the world representing their respective countries will be attending the conference. The task is to find the possible number of ways(P) to make the N members sit around the circular table such that.

// The president and prime minister of India will always sit next to each other.

// Example 1:

// Input :

// 4   -> Value of N(No. of members)

// Output : 

// 12  -> Possible ways of seating the members

// Explanation:

// 2  members should always be next to each other. 

// So, 2 members can be in 2!ways

// Rest of the members can be arranged in (4-1)! ways.(1 is subtracted because the previously selected two members will be considered as single members now).

// So total possible ways 4 members can be seated around the circular table 2*6= 12.

// Hence, output is 12.

// Example 2:

// Input:

// 10  -> Value of N(No. of members)

// Output :

// 725760 -> Possible ways of seating the members 

// Explanation:

// 2 members should always be next to each other.

// So, 2 members can be in 2! ways 

// Rest of the members can be arranged in (10-1)! Ways. (1 is subtracted because the previously selected two members will be considered as a single member now).

// So, total possible ways 10 members can be seated around a round table is 

// 2*362880 = 725760 ways.

// Hence, output is 725760.

// The input format for testing

// The candidate has to write the code to accept one input 

// First input – Accept value of number of N(Positive integer number)

// The output format for testing 

// The output should be a positive integer number or print the message(if any) given in the problem statement(Check the output in example 1, example2)

// Constraints :

// 2<=N<=50
// unsigned long long  factorial(int n){
//     if(n==0||n==1) return 1;
//     unsigned long long ans=n*factorial(n-1);
//     return ans;
// }
// int main(){
//     int n;
//    unsigned long long  combi;
//     cout<<"enter n value:";
//     cin>>n;
 
//    unsigned long long  ways=n-1;
// combi=factorial(ways);

//  unsigned long long  ans=combi*2;
//   cout<<ans;
// }

// Problem Statement

// /* An intelligence agency has received reports about some threats. The reports consist of numbers in a mysterious method. There is a number “N” and another number “R”. Those numbers are studied thoroughly and it is concluded that all digits of the number ‘N’ are summed up and this action is performed ‘R’ number of times. The resultant is also a single digit that is yet to be deciphered. The task here is to find the single-digit sum of the given number ‘N’ by repeating the action ‘R’ number of times.An intelligence agency has received reports about some threats. The reports consist of numbers in a mysterious method. There is a number “N” and another number “R”. Those numbers are studied thoroughly and it is concluded that all digits of the number ‘N’ are summed up and this action is performed ‘R’ number of times. The resultant is also a single digit that is yet to be deciphered. The task here is to find the single-digit sum of the given number ‘N’ by repeating the action ‘R’ number of times. */

// If the value of ‘R’ is 0, print the output as ‘0’.

// Example 1:

// Input :

// 99 -> Value of N

// 3  -> Value of R

// Output :

// 9  -> Possible ways to fill the cistern.

// Explanation:

// Here, the number N=99

// Sum of the digits N: 9+9 = 18
// Repeat step 2 ‘R’ times i.e. 3 tims  (9+9)+(9+9)+(9+9) = 18+18+18 =54
// Add digits of 54 as we need a single digit 5+4
// Hence , the output is 9.

// Example 2:

// Input :

// 1234   -> Value of N

// 2      -> Value of R

// Output :

// 2  -> Possible ways to fill the cistern

// Explanation:

// Here, the number N=1234

// Sum of the digits of N: 1+2+3+4 =10
// Repeat step 2 ‘R’ times i.e. 2 times  (1+2+3+4)+(1+2+3+4)= 10+10=20
// Add digits of 20 as we need a single digit. 2+0=2
// Hence, the output is 2.

// Constraints:

// 0<N<=1000

// 0<=R<=50

// The Input format for testing 

// The candidate has to write the code to accept 2 input(s)

// First input- Accept value for N (positive integer number)

// Second input: Accept value for R(Positive integer number)

// The output format for testing 

// The output should be a positive integer number or print the message (if any) given in the problem statement. (Check the output in Example 1, Example 2).



// int main(){
//     int n,r;
//     cout<<"enter n and r value";
//     cin>>n>>r;
//     int sum=0;
//     while(n>0){
//        int temp=n%10;
//        sum+=temp;
//        n/=10;
//     }
//     int newval;
//   newval=sum*r;
//   int ans=0;
//   while(newval>0){
//     int temp=newval%10;
// ans+=temp;
// newval/=10;
//   }


//   cout<<ans;
  

// }
// Input :

// 4 -> Value of N

// {5,2,3,7} -> a[], Elements a[0] to a[N-1], during input each element is separated by a new line

// 12 -> Value of D, i.e. date 

// 200 -> Value of x i.e. fine

// Output :

// 600  -> total fine collected 

// Explanation:

// Date D=12 means , only an even number of vehicles are allowed. 

// Find will be collected from 5,3 and 7 with an amount of 200 each.

// Hence, the output = 600.

// Example 2:

// Input :

// 5   -> Value of N 

// {2,5,1,6,8}  -> a[], elements a[0] to a[N-1], during input each element is separated by new line

// 3 -> Value of D i.e. date 

// 300 -> Value of X i.e. fine 

// Output :

// 900  -> total fine collected 

// Explanation:

// Date D=3 means only odd number vehicles with are allowed.

// Find will be collected from 2,6 and 8 with an amount of 300 each.

// Hence, the output = 900 

// Constraints:

// 0<N<=100
// 1<=a[i]<=9
// 1<=D <=30
// 100<=x<=5000 
// The input format for testing 

// The candidate has to write the code to accept 4 input(s).

// First input – Accept for N(Positive integer) values (a[]), where each value is separated by a new line.

// Third input – Accept value for D(Positive integer)

// Fourth input – Accept value for X(Positive integer )

// The output format for testing 

// The output should be a positive integer number (Check the output in Example 1, Example e) if no fine is collected then print ”0”.

// int main(){
//     int n,x,d;
//     cout<<"enter n ,x,d";
//     cin>>n>>x>>d;
// vector<int>arr(n);
// cout<<"enter arr values";
// for(int i=0;i<n;i++){
//     cin>>arr[i];
//     // arr.push_back(arr[i]);
// }
// int isallowed;
// if(x%2==0){
//     isallowed=1;
// }else{
//     isallowed=0;
// }
// int cnt=0;
// for(int i=0;i<n;i++){
//  if(isallowed){
//     if(arr[i]%2!=0){
//         cnt++;
//     }
//  }
//   if(!isallowed){
//     if(arr[i]%2==0){
//         cnt++;
//     }
//  }
// }
// int ans=cnt*d;

// cout<<ans;

// }


//armstrong number


// int main(){

//     int n;
//     cout<<"enter nvalues";
//     cin>>n;


// int x=n;
// int dig=0;
// while(x!=0){
//     dig++;
//     x/=10;
// }

// x=n;
// int sum=0;
// while(x!=0){
//   int ld=x%10;
//   sum+=pow(ld,dig);
//   x/=10;
// }

// if(sum==n){
//     cout<<"it is a armstrong number"<<" ";
// }else{
//     cout<<"not a aarmstrong number";
// }
// }


// /////STRONG NUMBERERRERR trong Number
// A number is called strong if the sum of factorials of digits equals the number itself.
// (Example: 145 = 1! + 4! + 5! → Strong Number)
// int factorial(int n){
//     if(n==0||n==1) return 1;
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int x=n;
//       int ans=0;
//     while(n>0){
//         int lastdigit=n%10;
//         ans+=factorial(lastdigit);
//         n/=10;
//     }

//     if(ans==x){
//         cout<<"strong number";
//     }else{
//         cout<<"not a strong number";
//     }
// }


// Prime Factors
// Write a program to print all prime factors of a given number.
// (Example: 28 → 2, 2, 7)
// bool factor(int f){
//     int cnt=0;
//     for(int i=1;i<=f;i++){
//         if(f%i==0){
//             cnt++;
//         }
//     }
//     if(cnt==2) return true;
//     return false;
// }
// int main(){
//   cout<<"entr n";
//   int n;
//   cin>>n;
//   int cnt=0;
//   vector<int>factors;
//   for(int i=1;i<=n;i++){
//     if(n%i==0){
//         factors.push_back(i);
//     }
//   }
//   vector<int>ans;
//   for(auto it:factors){
//     if(factor(it)){
//         ans.push_back(it);
//     }
//   }
//   for(auto it:ans){
//     cout<<it<<" ";
//   }

// }

// int main(){
// int n;
// cin>>n;
// for(int i=2;i<=n;i++){
//   while(n%i==0){
//     cout<<i;
//     n/=i;
//   }
// }
// if(n>1) cout<<n;

// }

#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
int cnt=0;
for(int i=1;i<=n;i++){
  if(n%i==0) cnt++;
}
if(cnt==2) return true;
return false;
}
int revnumm(int n){
  int temp=n;
  
  int rev=0;

  while(n>0){
    int lastdigit=n%10;
    rev=rev*10+lastdigit;
  n/=10;
  }
  return rev;
}

int gcd(int a,int b){
  for(int i=min(a,b);i>=1;i--){
    if(a%i==0 && b%i==0) return i;
  }
  return -1;
}

  bool isvowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
      return true;
    }
    return false;
  }
  void count(string s){
    int vow=0, con=0;
    for(int i=0;i<s.size();i++){
      char ch=tolower(s[i]);
      if(isalpha(ch)){
        if(isvowel(ch))vow++;
        else con++;
      }
    } 
    cout<<vow<<" ";
    cout<<con;
  }

  string reverse(string s){
  string rev="";
    for(int i=s.size()-1;i>=0;i--){
      rev+=s[i];
    }
    return rev;
  }
  string duplicate(string s){
    string ans="";
    // sort(s.begin(),s.end());
    // for(int i=0;i<s.size()-1;i++){
    //   if(s[i]!=s[i+1]) ans+=s[i];
    // }
    // ans+=s.back();
    // return ans;
    for(int i=0;i<s.size();i++){
      if(ans.find(s[i])==-1)ans+=s[i];
    }
    return ans;
  }

  int second(vector<int>&nums){

    int first=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<nums.size();i++){
      if(nums[i]>first){
        second=first;
        first=nums[i];
      }else if(nums[i]>second&& first!=nums[i] ){
        second=nums[i];
      }
    }
    return second;
  }
void addmatric(vector<vector<int>>&a ,vector<vector<int>>&b ,int r,int c){
  vector<vector<int>>C(r,vector<int>(c));
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      C[i][j]=a[i][j]+b[i][j];
     
    }
  }
  cout<<"Addition Matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<C[i][j]<<" ";
    }
}

vector<int>merge(vector<int>&num1,vector<int>&num2){
  vector<int>ans;
  for(int i=0;i<num1.size();i++){
    ans.push_back(num1[i]);
  }
  for(int i=0;i<num2.size();i++){
    ans.push_back(num2[i]);
  }
  return ans;
}

int missing(vector<int>nums)
{
int n=nums.size()+1;
// int missing =0;
// int sum=0;
// int total=(n*(n+1))/2;
// for(int i=0;i<n;i++){
// sum+=nums[i];
// }
// return total-sum;
int xor1=0,xor2=0;
for(int i=1;i<=n;i++){
  xor1^=i;
}
for(int i=0;i<nums.size();i++){
  xor2^=nums[i];
}
return xor1^xor2;

}
int countt(string s){
int cnt=0;
for(int i=0;i<s.size();i++){
  if(s[i]!=' ' && (i==0 || s[i-1]==' ')) cnt++;
}
return cnt;
}
string removespace(string s){
string ans="";
for(int i=0;i<s.size();i++){
  if(s[i]!=' ') ans+=s[i];
}
return ans;
}
vector<int>rotate(vector<int>&nums){
    int n=nums.size();
    int last=nums[n-1];
    for(int i=n-1;i>0;i--){
      nums[i]=nums[i-1];
    }
    nums[0]=last;
return nums;

}
bool isplaindrome(string s){
  int start=0;
  int end=s.size()-1;
  while(start<end){
    if(s[start]!=s[end]) return false;
    start++;
    end--;

  }
  return true;
}
int power(int base,int exp){
  int res=1;
  for(int i=0;i<exp;i++){
    res*=base;
  }
  return res;

}

//binary to decimal

int dc(string s){
  int n=s.size();
  int power=0;
  int decimal=0;
  for(int i=n-1;i>=0;i--){
     if(s[i]=='1')decimal+=pow(2,power);
     power++;
  }
  return decimal;
}


bool perfect(int n){
  vector<int>values;
  
  for(int i=1;i<=n;i++){
    if(n%i==0) values.push_back(i);
  }
  int sum=0;
  for(int x:values){
    if(x!=n) sum+=x;
  }
  if(sum==n) return true;
  return false;


}
  int main(){
  int n;
  // cin>>n;
  // vector<int>nums(n);
  // for(int i=0;i<n;i++){
  //   cin>>nums[i];
  // }
  cin>>n;
  bool ans =perfect(n);
  if(ans) cout<<"perfect number";
  else cout<<"not perfect number";

  
   }
  


  

    // int r,c;
  // cin>>r>>c;
  // vector<vector<int>>a(r,vector<int>(c));
  // vector<vector<int>>b(r,vector<int>(c));
  // for(int i=0;i<r;i++)  
  //       for(int j=0;j<c;j++)
  //           cin>>a[i][j];

  //   for(int i=0;i<r;i++)
  //       for(int j=0;j<c;j++)
  //           cin>>b[i][j];
