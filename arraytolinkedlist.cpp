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

Node* ConvertToLinkedlist( vector<int>&nums){
   
     Node* head=new Node(nums[0]);
     Node* mover=head;
     for(int i=1;i<nums.size();i++){
        Node* temp=new Node(nums[i]);

        mover->next=temp;
       // mover=mover->next;
        mover=temp;
     }
     return head;

}
int lengthOflinkedList(Node* head){
    int count=0;
    Node* temp=head;
    while(temp){
        // cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    return count;
}

int SearchElementinLinkedList(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val) return true;
        temp=temp->next;
    }
    return false;
}
int main(){

    vector<int>nums={11,2,3,2,1,5};
    Node* y=new Node(nums[5]); //new keywords gives the memory location of the value
    // Node z=Node(nums[0],nullptr);
    // cout<<z.next;
    Node* head=ConvertToLinkedlist(nums);
    // cout<<y->data<<endl;
    // cout<<head->data<<endl;

    Node*temp=head;
    while(temp){
    //     //   cout<<temp->data<<" ";
         temp=temp->next;
         }
    // cout<<lengthOflinkedList(head);

    cout<<SearchElementinLinkedList(head,15);
    // cout<<y;
}

