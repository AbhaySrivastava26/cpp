#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>FoursumBetter(vector<int>&vec,int n){
    sort(vec.begin(),vec.end());
set<vector<int>>st;
for(int i=0;i<n;i++){
    set<int>hashset;
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
      int fourth=-(vec[i]+vec[j]+vec[k]);
      if(hashset.find(fourth)!=hashset.end()){
      vector<int> temp={vec[i],vec[j],vec[k],fourth};
             
               st.insert(temp);
      }

            
        }   
  hashset.insert(vec[j]);
    
}
}
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;

}

int main(){
int n;
cin>>n;
vector<int>vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}




vector<vector<int>>result=FoursumBetter(vec,n);

for(const auto& triplet:result){
    for(int num:triplet){
        cout<<num<<" ";
    }
}

}