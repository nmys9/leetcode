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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode(0,NULL);
        ListNode *p=head;
        int carry=0;
        while(l1!=NULL || l2!=NULL){
            int sum=0+carry;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            sum=sum%10;
            ListNode *newNode=new ListNode;
            newNode->val=sum;
            p->next=newNode;
            // p->next=new ListNode(sum);
            p=p->next;

        }
        if(carry==1)p->next=new ListNode(1);
        return head->next;

    }
};