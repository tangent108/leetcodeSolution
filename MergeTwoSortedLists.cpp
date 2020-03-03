/*

Merge two sorted linked lists and return it as a new list. The new list should be made 
by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4

*/




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p, *dummy= new ListNode(-1);
        p=dummy;
        while(l1 && l2){
            if(l1->val <= l2->val){
            dummy->next=l1;
            l1=l1->next;
            dummy=dummy->next;
            }
            else{
                dummy->next=l2;
                l2=l2->next;
                dummy=dummy->next;
            }
            
        }
        if(l1){
            dummy->next = l1;
        }
        if(l2){
            dummy->next=l2;
        
        }
        return p->next;
        
        
    }
};
