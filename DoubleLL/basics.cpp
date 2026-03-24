#include <iostream>
#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1,Node* next1,Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }

};


Node* deleteHead(Node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL) return head;
    Node* prev=head;
    head=head->next;
    prev->next=nullptr;
    head->prev=nullptr;
    delete prev;
    return head;
    

}

Node* ConvertArrtoDll(vector<int>&arr){
     Node* head= new Node(arr[0],nullptr,nullptr);
     Node* prev=head; 
     for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=prev->next;
     }
     return head;
}
void  print(Node* head){
    // Node* head=new Node(arr[0]);
   
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;

    }
}

 Node* Deletetail(Node* head){
    if(head==NULL||head->next==NULL) return NULL;
        Node* tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
        } 
       Node*  prevTail=tail->prev;
       prevTail->next=nullptr;
       tail->prev=nullptr;
       delete tail;
    //    delete next;

      
    return head;

}
Node* DeleteatKposition(Node* head,int k){
    
}






int main() {
     vector<int>vc={2,45,232,23232};
     Node* head=ConvertArrtoDll(vc);
     head=Deletetail(head);
 print(head);
    return 0;
}