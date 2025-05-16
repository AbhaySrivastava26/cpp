#include<bits/stdc++.h>

using namespace std;
struct Node{
    int data;
    Node* next;

    public:

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* ConvertArrayToLL(vector<int>&nums){
       Node* head=new Node(nums[0]);
       Node* mover=head;
       for(int i=1;i<nums.size();i++){
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        mover=mover->next;
       }
       return head;
}

Node* RemoveHead(Node* head){
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}



int main(){
 vector<int>nums={7,2,3,4,5};

 Node* head=ConvertArrayToLL(nums);
//  cout<<head->data<<endl;

head=RemoveHead(head);
print(head);
}