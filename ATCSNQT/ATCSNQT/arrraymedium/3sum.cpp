#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>Threesum(vector<int>&vec,int n){
    sort(vec.begin(),vec.end());
set<vector<int>>st;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(vec[i]+vec[j]+vec[k]==0){
                vector<int>temp={vec[i],vec[j],vec[k]};
                st.insert(temp);
            }

        }
    }
}


vector<vector<int>>res(st.begin(),st.end());
return res;
}

int main(){
int n;
cin>>n;
vector<int>vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}




vector<vector<int>>result=Threesum(vec,n);

for(const auto& triplet:result){
    for(int num:triplet){
        cout<<num<<" ";
    }
}

}