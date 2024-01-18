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
   
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p=list2;
        while(p!=NULL){
            ListNode *newNode=new ListNode;
            newNode->val=p->val;
            newNode->next=NULL;
            if(list1==NULL){
                list1=newNode;
            }else if(newNode->val<=list1->val){
                newNode->next=list1;
                list1=newNode;
            }else{
                ListNode *curr=list1;
                while(curr->next!=nullptr && curr->next->val<newNode->val){
                    curr=curr->next;
                }
                newNode->next=curr->next;
                curr->next=newNode;
            }
            p=p->next;
        }
        return list1;
    }
};