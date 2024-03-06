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
        if(head == NULL)return false;
        else if(head == head->next)return true;
        else if(head -> next == NULL)return false;
        else if(head == head -> next -> next)return true;

        ListNode *fast = head, *slow = head;
        fast = fast -> next -> next;
        slow = slow -> next;
        while(fast != slow and fast != NULL){
            fast = fast -> next;
            slow = slow -> next;
            if(fast != NULL) fast = fast -> next;
        }
        if(fast == slow) return true;
        return false;
    }
};