// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// //  int GreatestCommanDivisor(int a,int b){
// //     int ans=0;
// //     for(int i=1;i<=min(a,b);i++){
// //         if(a%i==0 && b%i==0){
// //           ans=i;
// //         }
// //     }
// //     return ans;
  
// //  }
// class Solution {
// public:
//     ListNode* insertGreatestCommonDivisors(ListNode* head) {
//         // ans = __gcd(a,b)
//        ListNode* temp=head;
//  if(head==nullptr ) return NULL;
//     while(temp!=nullptr && temp->next!=nullptr){
//     //      int a = temp->val;
//     // int b = temp->next->val;
//    int  gcdd=__gcd(temp->val,temp->next->val);
//     ListNode* newNode=new ListNode(gcdd);
//               newNode->next=temp->next;
//               temp->next=newNode;
//               temp=newNode->next;
   
// }
    
//     return head;


//     }
// };