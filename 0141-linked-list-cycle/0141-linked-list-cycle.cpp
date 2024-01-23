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
    bool hasCycle(ListNode *head) {
        ListNode *s=head;
        ListNode *f=head;
        while( f!=nullptr && f->next!=nullptr ){
            s=s->next;
            f=f->next->next;
            if(f==s)return true;
        }
        return false;
    }
};