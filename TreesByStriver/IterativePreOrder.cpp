#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }


};
vector<int> iterativePreorder(Node* root){
    vector<int>preorder;
    stack<Node*>st;
 if(root==nullptr){
    return preorder;
 }
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            preorder.push_back(root->data);
            if(root->right!=nullptr){
                st.push(root->right);
            }
            if(root->left!=nullptr){
                st.push(root->left);
            }
        }
        return preorder;
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(10);
    root->left->left=new Node(11);
    root->left->left->right=new Node(17);
   vector<int>res= iterativePreorder(root);
   for(int val:res){
    cout<<val<<" ";
   }

}