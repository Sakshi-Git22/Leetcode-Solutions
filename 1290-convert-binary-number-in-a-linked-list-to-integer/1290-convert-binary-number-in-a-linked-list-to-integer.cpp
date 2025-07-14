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
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        ListNode* temp = head;
        int size = 0;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        size--;
        temp = head;
        while(temp!=NULL){
            if(temp->val==1)
            ans += pow(2,size);
            size--;
            temp=temp->next;
        }
        return ans;
    }
};