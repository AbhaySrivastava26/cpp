#include<bits/stdc++.h>
using namespace std;


struct Transactions{
    string sender,receiver;
    double amount;
    long long time;

};
int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<Transactions>t(n);
    for(int i=0;i<n;i++){
        string line ;
        getline(cin,line);
        stringstream ss(line);
        ss>>t[i].sender>>t[i].receiver>>t[i].amount>>t[i].time;
    }
    unordered_map<string,vector<pair<long long,int>>>mp;
}
