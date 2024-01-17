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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int count=0;
        ListNode *p=head;
        while(p!=NULL){
            count++;
            p=p->next;
        }
        int nodes=count-n;//3
        if(count==n){
            ListNode *temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode *pp=nullptr;
        ListNode *del=head;
        while(nodes){
            pp=del;
            del=del->next;
            nodes--;
        }
        pp->next=del->next;
        delete del;
        
        return head;
    }
};