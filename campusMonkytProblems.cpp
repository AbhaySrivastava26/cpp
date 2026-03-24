#include<bits/stdc++.h>
using namespace std;

int problem1(string s){
    int star=0,hash=0;
    for(int i=0;i<s.size();i++){
  if(s[i]=='#') hash++;
  if(s[i]=='*')star++;
    }
    if(hash==star)return 0;
    if(star>hash) return abs(hash-star);
    if(hash>star) return -(abs(hash-star));
    return -1;
}
int problem2PriorElement(int nums[],int n){
//    int cnt=0;
//    for(int i=0;i<n;i++){
//     bool isGreater = true;
//       for(int j=i-1;j>=0;j--){
//         if(nums[i]<=nums[j]){
//             isGreater=false;
//             break;
//         }
//       }
//       if(isGreater) cnt++;
//    }
//    return cnt;
    int cnt=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(nums[i]>maxi) cnt++;
        maxi=max(maxi,nums[i]);
    }
    return cnt;

    }

 int totaleat(int n,int k,int j,int m, int p){
      int totalbanana=m/k;   
      int remaining=m%k;
      int totalpeanut=p/j;
      int remainingpeanut=p%j;
      int ans=n-(totalbanana+totalpeanut);
      if(remaining>0 ||remainingpeanut>0) ans--;
      return ans;
 }
 vector<int>sort3(vector<int>&nums){
  int zeroes=0,ones=0,twos=0;
  for(int i=0;i<nums.size();i++){
    if(nums[i]==0)zeroes++;
    if(nums[i]==1)ones++;
    if(nums[i]==2)  twos++;
  }
  int index=0;
  for(int i=0;i<zeroes;i++){
    nums[index++]=0;
  }
  for(int i=0;i<ones;i++){
    nums[index++]=1;
  }
  for(int i=0;i<twos;i++){
    nums[index++]=2;
  }
  return nums;
 }

string commanprefix(vector<string>&s){
string ans="";
sort(s.begin(),s.end());
string first=s[0];
string last=s[s.size()-1];
for(int i=0;i<s.size();i++){
  if(first[i]!=last[i]) break;
  ans+=first[i];
}
return ans;


 }
 int totalsundays(string week,int days){
    unordered_map<string,int>mp;
    int ans=0;
    mp["mon"]=6;
    mp["tue"]=5;
    mp["wed"]=4;
    mp["thu"]=3;
    mp["fri"]=2;
    mp["sat"]=1;
    mp["sun"]=0;
    if(days-mp[week]>1){
      ans=1+(days-mp[week])/7;
    }
    return ans;
 }

 int parkinglot(vector<vector<int>>&parking,int row,int col){
   int maxi=0;
   int maxiindex=-1;
   
   for(int i=0;i<row;i++){
    int ans=0;
    for(int j=0;j<col;j++){
    if(parking[i][j]==1) ans++;
    }
    if(maxi<ans){
       maxi=ans;
       maxiindex=i;
    }
   }
   return maxiindex+1;
 }

int minequal(int p,int q, int r){
int cnt=0;
vector<int>v={p,q,r};
sort(v.begin(),v.end());
int leastmin=v[0];
int mini=v[1];
int maxi=v[2];
int diff=maxi-leastmin;
if(diff%2!=0) return -1;
return diff/2;
// return cnt;
}


bool isprime(int n){
  int cnt=0;
  // if(n<=1) return false;
  for(int i=1;i<=n;i++){
    if(n%i==0) cnt++;
  }
  if(cnt==2) return true;
  return false;
}
int nthprimes(int n){
  int num=0,count=0;
  while(count<n){
    num++;
    if(isprime(num)) count++;
  }
  return num;
}


//remove all consecutive duplicate character input=2233322 output=232

string removeconsecutive(string s){
  string res="";
  res+=s[0];
  for(int i=1;i<s.size();i++){
    if(s[i]!=s[i-1]) res+=s[i];

  }
  return res;
}
bool subsetsum(vector<int>&nums,int i,int target){
 if(target==0) return true;
 if(i==nums.size()|| target<0) return false;
 if(subsetsum(nums,i+1,target-nums[i]))return true;
 return subsetsum(nums,i+1,target);
}


int main(){
int n;
cin>>n;
int target;
cin>>target;
vector<int>nums(n);
for(int i=0;i<n;i++){
  cin>>nums[i];
}
bool isexist=subsetsum(nums,0,target);
if(isexist) cout<<"Exist";
else cout<<"not";
}



// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     int n,x,y;
//     cin>>n>>x>>y;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     int cnt=0;
//     for(int i=0;i<n;i++){
//       for(int j=i;j<n;j++){
//         string t1=(to_string(arr[i])+to_string(arr[j]));
//         int sum1=stoi(t1);
//         if(sum1>=x && sum1<=y) cnt++;
//         if(i!=j){
//           string s2=(to_string(arr[j])+to_string(arr[i]));
//           int sum2=stoi(s2);
//           if(sum2>=x && sum2<=y)cnt++;
//         }
//       }

//     }

//   cout<<cnt<<endl;  
//   }
// }




  //   int main(){
   
  //  int n,m;
  //  cin>>n>>m;
  //  vector<int>adj(n+1);
  //  for(int i=0;i<m;i++){
  //   int u,v;
  //   adj[u].push_back(v);
  //   adj[v].push_back(u);
  //  }

    
  //   }

//   int main(){
//     string s;
//     getline(cin,s);
//     if(s.empty())cout<<"Invalid Input"<<endl ;return 0;
//     unordered_map<char,int>freq;
//     unordered_map<char,int>index;
//     for(int i=0;i<s.size();i++){
//       freq[s[i]]++;
//       if(index.find(s[i])==index.end()){
//         index[s[i]]=i;

//       }
//     }
//     //first non repeating charater
//     char firstnonrepeating='\0';
//     bool hasnonrepeated=false;
//     for(int i=0;i<s.size();i++){
// char c=s[i];
// if(freq[c]==1){ firstnonrepeating=c;
// hasnonrepeated=true;
// break;
// }
//     }
//     if(hasnonrepeated) cout<<firstnonrepeating;
//     else cout<<"NULL";

//     //find the most repeating character
//     char mostrepeating='\0';
//     int maxFreq=0;
//     int maxCount=-1;
    
//     for(auto &pair:freq){
//       if(pair.second>maxCount) maxCount=pair.second;
//     }

// //first repeating character
// char firstrepeat='\0';
// bool hasrepeat=false;
// for(int i=0;i<s.size();i++){
//   char c=s[i];
//   if(freq[c]>1){
//     firstrepeat=c;
//     hasrepeat=true;
//     break;
//   }
// }
// if(!hasrepeat) cout<<"none"<<endl;
// if(hasrepeat) cout<<firstrepeat<<endl;


//   }

  // int main(){
  // int total_income=0,total_expense=0,total_saving=0;
  // cin>>total_income;
  // cin.ignore();
  // unordered_map<string ,int>mp;
  // vector<string>v;
  // while(true){
  //   string cat="";
  //   int exp;
  //   getline(cin,cat);
  //   if(cat=="done") break;
  //   cin>>exp;
  //   cin.ignore();
  //   if(mp.find(cat)==mp.end()){
  //     v.push_back(cat);
  //   }
  //   mp[cat]+=exp;
  //   total_expense+=exp;
  // }
  // cout<<total_income<<endl;

  // cout<<total_expense<<endl;
  // cout<<total_income-total_expense<<endl;
  // for (string s:v){
  //   cout<<s<<" "<<mp[s]<<endl;
  // }


  // }

  