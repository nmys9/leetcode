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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *evenHead=even;
        while(even!=nullptr && even->next!=nullptr){
            odd->next=odd->next->next;
            odd=odd->next;
            even->next=even->next->next;
            even=even->next;
        }
    
    odd->next=evenHead;
            return head;   
    
    /*
        if(head->next==NULL)return head;
        while(O->next!=NULL && E!=NULL){
            O->next=O->next->next;
            O=O->next;

            E->next=E->next->next;
            E=E->next;
        }
        O->next=even;
        head=odd;
        return head;*/
    }
};