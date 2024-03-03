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
        if(head == NULL or (head -> next == NULL and n == 1))return NULL;
        int c = 0;
        ListNode *temp = head;
        while(temp){
            c++;
            temp = temp -> next;
        }
        if(c == n)return head -> next;
        temp = head;
        for(int i = 0; i < c - n - 1; i++){
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        return head;
    }
};