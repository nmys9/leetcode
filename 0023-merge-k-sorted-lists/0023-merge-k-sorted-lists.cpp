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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if (k == 0) return nullptr;

        auto cmp = [](const ListNode* a, const ListNode* b) {
            return a->val > b->val;
        };
        priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> minHeap(cmp);

        for (int i = 0; i < k; ++i) {
            if (lists[i]) {
                minHeap.push(lists[i]);
            }
        }

        ListNode dummy(0);
        ListNode* p = &dummy;

        while (!minHeap.empty()) {
            ListNode* temp = minHeap.top();
            minHeap.pop();

            p->next = temp;
            p = p->next;

            if (temp->next) {
                minHeap.push(temp->next);
            }
        }

        return dummy.next;
    }
};