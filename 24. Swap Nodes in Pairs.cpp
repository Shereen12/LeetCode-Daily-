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
        if(head == NULL)
            return head;
        ListNode *i = head;
        ListNode *prev = head;
        while(i->next != nullptr){
            ListNode *a = i->next;
            ListNode *b = i->next->next;
            if(prev != nullptr){
                prev->next = a;
                a->next = i;
                i->next = b;
                prev = i;
                if(prev == head)
                    head = a;
                if(i->next != nullptr)
                    i = i->next;
            }
        }
        return head;
    }
};
