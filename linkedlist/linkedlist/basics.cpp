#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
//contrcuters are member funciton which is used to initialize the object(selfdefined object)
};

int main(){

    vector<int>nums={1,2,3,2,1,5};
    Node* y=new Node(nums[5]); //new keywords gives the memory location of the value
    // Node z=Node(nums[0],nullptr);
    // cout<<z.next;
    cout<<y->data<<endl;
    cout<<y;
}

