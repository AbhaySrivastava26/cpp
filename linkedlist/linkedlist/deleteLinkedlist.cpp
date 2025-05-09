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
Node* TailRemove(Node* head){
    Node* temp=head;
    if(head==NULL||head->next==NULL) return NULL;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}

Node* deleteLLatK(Node* head,int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int count=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        count++;
        if(count==k){

            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;

    }
    return head;
}




Node* deleteLLatElement(Node* head,int el){
    if(head==NULL) return head;
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    // int count=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        // count++;
        if(temp->data==el){

            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;

    }
    return head;
}


int main(){
 vector<int>nums={130,322,5432,432,934};

 Node* head=ConvertArrayToLL(nums);
//  cout<<head->data<<endl;

head=deleteLLatElement(head,432);
print(head);
}