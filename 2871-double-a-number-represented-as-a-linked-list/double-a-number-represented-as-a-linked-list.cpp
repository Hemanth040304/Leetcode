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
    void fun(ListNode *head, int &carry){
        if(head == NULL) return;
        fun(head -> next, carry);
        int add = head -> val * 2 + carry;
        head -> val = add % 10;
        add /= 10;
        carry = add;
    }

    ListNode* doubleIt(ListNode* head) {
        int c = 0;
        fun(head, c);
        while(c){
            ListNode * NN = new ListNode(c % 10);
            c /= 10;
            NN -> next = head;
            head = NN;
        }
        return head;
    }
};