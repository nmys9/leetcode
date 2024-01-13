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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int counta=0;
        int countb=0;
        ListNode *ha=headA;
        ListNode *hb=headB;
        while(ha!=NULL){
            counta++;
            ha=ha->next;
        }
        while(hb!=NULL){
            countb++;
            hb=hb->next;
        }
        int diff=abs(countb-counta);
        ListNode *a=headA;
        ListNode *b=headB;
        if(counta>countb){
            while(diff--)
                a=a->next;
        }else if(counta<countb){
            while(diff--)
                b=b->next;
        }
        while(a!=b){
            a=a->next;
            b=b->next;
        }

         
         return a;   
    }
};