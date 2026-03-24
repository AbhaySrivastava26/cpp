/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* temp=head;
//         unordered_map<ListNode*,int>mp;
//         while(temp!=nullptr){
//             if(mp.find(temp)!=mp.end()){
//                 return true;
//             }
//             mp[temp]=1;
//             temp=temp->next;
//         }
//         return false;
        
//     }
// };




//JAAAVVAAAAAAAAAA
/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
//  */
//  import java.util.HashSet;
// public class Solution {
//     public boolean hasCycle(ListNode head) {
//         HashSet<ListNode>visited=new HashSet<>();
//         ListNode temp=head;
//         while(temp!=null){
//             if(visited.contains(temp)){
//                 return true;
//             }
//             visited.add(temp);
//             temp=temp.next;
//         }
//         return false;
//     }
// }