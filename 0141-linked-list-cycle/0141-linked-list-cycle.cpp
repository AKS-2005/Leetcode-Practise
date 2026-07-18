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
        ListNode* temp = head;
        ListNode* slow = head;
        while(temp && temp->next){
            temp = temp->next->next;
            slow = slow->next;
            if(temp == slow) return true;
        }
        return false;
    }
};