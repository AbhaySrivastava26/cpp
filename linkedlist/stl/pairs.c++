#include<bits/stdc++.h>
using namespace std;

void pairs(){
    pair<int ,int >p={1,5};
    cout<<p.first<<" "<<p.second;
    cout<<endl;

    pair<int ,pair<int,int>>q={1,{4,6}};
    cout<<q.second.second<<" "<<q.first<<" "<<q.second.first;
    pair <int,int>arr[]={{1,3},{4,43},{43,32}};
    cout<<endl;
    cout<<arr[1].second;
    cout<<endl;
    cout<<arr[0].first;
    // cout<<arr[2];
}

int main(){

    pairs();
}