//vectors are dynamic in nature
#include<bits/stdc++.h>
using namespace std;

void explain_vector(){



// v.push_back(10);
// v.emplace_back(3);
// vector<pair<int,int>>vec;
// vec.push_back({1,2});
// vec.emplace_back(3,2);
// vector<int>v3(4,34);
// vector<int>v1(43,434);
// vector<int>v2(v1);
// cout<<v[0]<<" "<<v[1]<<endl;
// cout<<v3[1]<<endl;
// cout<<v2[1];
// cout<<endl;
// vector<long long int> in={1,3,2,3,42,4222};
// in.push_back(47777777);
// for(int value:in){
//     cout<<value<< " ";

// }
//vector iterator

vector<int>v;
v.push_back(100);
v.push_back(10);
v.push_back(900);
v.push_back(190);
v.push_back(1009);

// vector<int>::iterator it =v.begin();
// it++;
// cout<< *(it) <<"  ";
// it=it+2;
// cout<<*(it)<< " ";
// for(vector<int>::iterator it=v.begin();it!=v.end();it++){
//     cout<<*(it)<<"  ";
// }
// for(auto it=v.begin();it!=v.end();it++){
//     cout<<*(it)<<"  ";
// }
// for(auto it:v){
//     cout<<it<<"  ";
// }


// #deletion in vector
// v.erase(v.begin(),v.begin()+2);
// for(auto it:v){
//     cout<<it<<" ";
// }

//insert function

vector<int>s(2,100);
v.insert(v.begin()+4,2,200);
cout<<endl;
cout<<v.size();
cout<<endl;
for(auto in:v){
    cout<<in<<" ";
}

}
// }

void explainlist(){
 list<int>ls;

ls.push_back(32);
ls.emplace_back(3332);
ls.push_front(43);
ls.emplace_front(413);
for(auto ian:ls){
    cout<<ian<<" ";
}

}
void explainDequeue(){


    deque<int>dq;
    dq.push_back(32);
    dq.emplace_back(1212);
    dq.push_front(2);
    dq.emplace_front(3222);
    dq.pop_back();
    dq.pop_front();
    for(auto in:dq){
        cout<<in<<" ";
    }
}

void explainStack(){
stack<int>st;
st.push(1); 
st.push(11); 
st.push(231); 
st.emplace(221); 
cout<<endl;
cout<<st.top();
cout<<endl;
st.pop();
// st.pop();
while(!st.empty()){
cout<<st.top()<<" ";
st.pop();
}


}
 void explainqueue(){
  
queue<int>qu;
qu.push(32);  
qu.push(312);
qu.emplace(323);
qu.push(328);   //32 312 323  328 
qu.back() +=2;
cout << qu.back();
cout<<endl;
cout<<qu.front();
cout<<endl;
qu.pop();
cout<<qu.front();


 }


void explainpq(){
priority_queue<int>pq;

pq.push(10);
pq.push(105);
pq.push(103);
pq.push(1330);
cout<<pq.top();// {1330,105,103,10}
pq.pop();
// while(!pq.empty()){
    cout<<pq.top();
// }
cout<<endl;
cout<<pq.top();
cout<<endl;

// min heapp 
priority_queue<int,vector<int>,greater<int>>pqa;
pqa.push(30);
pqa.push(310);
pqa.push(130);
pqa.push(30111);
cout<<pqa.top();




}

void explainset(){


set<int>st;

//set is sorted and unique n dulication
st.insert(2);
st.insert(2);
st.insert(112);
st.insert(1112);
st.insert(11112);
auto it=st.find(112);
// auto it=st.find(1112);
st.erase(112);
for(auto ap:st){
    cout<<ap<<' ';
}
}

int main(){
    explainset();
}