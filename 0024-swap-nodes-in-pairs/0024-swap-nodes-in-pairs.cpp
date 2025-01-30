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
        ListNode* temp = head;
        if (!head || !head->next) {
            return head; 
        }
        head = head->next; 
        ListNode* prev = nullptr;

        while (temp && temp->next) {
            ListNode* curr = temp->next;
            ListNode* nextNode = curr->next;
            curr->next = temp;
            temp->next = nextNode;

            if (prev) {
                prev->next = curr;
            }
            prev = temp;
            temp = nextNode;
        }

        return head;
    }
};
