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
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
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



Node* inserttail(Node* head,int val){
    if(head==NULL) return new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* insertatKposition(Node* head,int el,int k){
    if(head==NULL){
        if(k==1) return new Node(el);
        else return NULL;
    }
    if(k==1){
        Node* temp=new Node(el,head);
        return temp;
    }
    int cnt=0;
    Node* temp= head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            Node* x=new Node(el);
            x->next=temp->next;
            temp->next=x;
            break;
        }
temp=temp->next;
    }
    return head;
}

Node* reverseLinkedList(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
   Node* front= temp->next;
   temp->next=prev;
   prev=temp;
   temp=front;

}
return prev ;
}

Node* reverseLinkedListSt(Node* head){
    stack<int>st;
    Node* temp=head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
   temp=head;
    while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return head;
}


Node* insertbeforevalue(Node* head,int el,int k){
    if(head==NULL){
       
  return NULL;
    }
    if(head->data==k){
        return new  Node(el,head);
    }
    // int cnt=0;
    Node* temp= head;
    while(temp!=NULL){
        // cnt++;
        if(temp->next->data==k){
            Node* x=new Node(el);
            x->next=temp->next;
            temp->next=x;
            break;
        }
temp=temp->next;
    }
    return head;
}



int main(){
 vector<int>nums={7,2,3,4,5};

 Node* head=ConvertArrayToLL(nums);
//  cout<<head->data<<endl;
 
head=reverseLinkedListSt(head);
print(head);
}