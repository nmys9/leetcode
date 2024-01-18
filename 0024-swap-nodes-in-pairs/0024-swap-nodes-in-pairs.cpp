/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *dummy=new ListNode;
        dummy->next=head;
        ListNode *p=dummy;
        ListNode *swap1;
        ListNode *swap2;
        while(p->next!=NULL && p->next->next!=NULL){
            swap1=p->next;
            swap2=p->next->next;

            swap1->next=swap2->next;
            swap2->next=swap1;
            p->next=swap2;
            p=swap1;
        }
        return dummy->next;
    }
};