#include<bits/stdc++.h>
using namespace std;


//gym membershiip

// int main(){
//     int n;
//     cin>>n;
//     if(n%12==0){
//         cout<<n/12*15000;
//     }else if(n%9==0){
//         cout<<n/9*12000;
//     }else if(n%6==0){
//         cout<<n/6*9000;
//     }else if(n%3==0){
//         cout<<n/3*5000;
//     }else{
//         cout<<"Error";
//     }
//     return 0;
// }

//custom sort using selection sort 

bool issmaller(pair<int,int>a,pair<int,int>b){
    if(a.first!=b.first){
        return a.first<b.first;
    }
    return a.second<b.second;


}
void customsort(vector<pair<int,int>>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(issmaller(v[j],v[minindex])){
                minindex=j;
            }
        }
        swap(v[i],v[minindex]);
    }
}
// int main(){
//     int n;
//     cin>>n;
//     cin.ignore();
//     string line;
//     getline(cin,line);
//     vector<pair<int,int>>v;
//     stringstream ss(line);
//     string temp;
//     while(getline(ss,temp,',')){
//         stringstream ps(temp);
//         int a,b;
//         ps>>a>>b;
//         v.push_back({a,b});
//     }
//     customsort(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first<<" "<<v[i].second;
//     }
// }



//recusrion count of total soldiers

void solve(int index,vector<int>&arr,vector<int>&nums,int& count,int n){
if(index==n-1){
    if(arr[index]!=arr[index-1]){
        count++;
    }
    return ;
}
for(int i=0;i<nums.size();i++){
    int val=nums[i];
    if(val!=arr[index-1]){
        arr[index]=val;
        solve(index+1,arr,nums,count,n);

    }
}
}
void soldiersarrangment(int n,vector<int>&nums,int end,int index,int &count,int r){
    if(index==n){
        if(nums[n-1]==end){
            count++;
        }
        return;
    }
    for(int i=1;i<=r;i++){
        if(i!=nums[index-1]){
          nums[index]=i;
          soldiersarrangment(n,nums,end,index+1,count,r);
        }
    }
    

}
// int main(){
//     int n,r,end;
//     cin>>n>>r>>end;
//     vector<int>nums(n);
//     int count=0;
//     nums[0]=1;
//     soldiersarrangment(n,nums,end,1,count,r);
//     cout<<count;

// }
// vector<int>ans;

void subsequences(int index,int n,vector<int>&nums,vector<int>&ans){
    if(index==n) {
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return ;
        
    }
     ans.push_back(nums[index]);
       subsequences(index+1,n,nums,ans);
       ans.pop_back();
       subsequences(index+1,n,nums,ans);

}
// #define int count=0;

void kcount(int sum,vector<int>&nums,int index,int k,int &count,vector<int>&ans){
    int n=nums.size();
    if(index==n){
        if(sum==k) {
            for(int s:ans) cout<<s<<" ";
           
        }
        return ;
        
    }
    ans.push_back(nums[index]);
    kcount(sum+nums[index],nums,index+1,k,count,ans);
    ans.pop_back();
    kcount(sum,nums,index+1,k,count,ans);
    
   
}


void permutations(vector<int>&nums,vector<int>&ans,vector<bool>&cor){
    int n=nums.size();
    if(ans.size()==n){
        for(int it:ans) cout<<it<<" ";
        cout<<endl;
        
        return ;
    }
    for(int i=0;i<n;i++){
 if(!cor[i]){
    ans.push_back(nums[i]);
    cor[i]=true;

    permutations(nums,ans,cor);
    cor[i]=false;
    ans.pop_back();
    
 }
}
}

void combinatonsums(vector<int>&nums,int target,vector<int>&ans,int index){
    int n=nums.size();
    if(target==0){
        for(int it:ans) cout<<it <<" ";
        cout<<endl;
        return;
    }
    if(index==n||target<0) return ;
ans.push_back(nums[index]);
combinatonsums(nums,target-nums[index],ans,index);
ans.pop_back();
combinatonsums(nums,target,ans,index+1);


}

 
void solvestring(int index,int n,string &str,int last){
    if(index==n){
        cout<<str<<" ";
        cout<<endl;
        return ;
    }
    str.push_back('0');
    solvestring(index+1,n,str,0);
    str.pop_back();
    if(last==0){
        str.push_back('1');
        solvestring(index+1,n,str,1);
        str.pop_back();
    }
}
int parkinghours(int n){
   int ans=0;
  if(n<=2) 
  {
    ans+=n*100;
  }
  else if(n<=5)
  {
     ans=(n-2)*50+2*100;

  } else if(n>5) {
    ans=(n-5)*20+2*100+3*50;
  }
  else 
  {
    return -1;
  }
  return ans;
}




// int main(){

//   string s;
//     cin >> s;

//     try {
//         int n = stoi(s);

//         if(n < 0){
//             cout << "Invalid Input";
//         } else {
//             cout << parkinghours(n);
//         }
//     }
//     catch(...) {
//         cout << "Invalid Input";
//     }


//     int n;
//     cin>>n;
//   int target;
//   cin>>target;

//     vector<int>nums(n);

//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     // vector<int>ans;
// vector<int>ans;


//  combinatonsums(nums,target,ans,0);
   




int  MaximumSum(vector<int>&arr,int maxsum,int index,int currentsum){
    if(currentsum>maxsum)return 0;
    if(index==arr.size()){
        return currentsum;
    }
    int take=MaximumSum(arr,maxsum,index+1,currentsum+arr[index]);
    int nottake=MaximumSum(arr,maxsum,index+1,currentsum);

    return max(take,nottake);


}



int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxsum;
cin>>maxsum;
int ans=MaximumSum(arr,maxsum,0,0);
cout<<ans;
return 0;

}
    
