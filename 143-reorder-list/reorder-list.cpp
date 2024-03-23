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

    ListNode* m = NULL, *mid = NULL;
    void solve(ListNode* prev, ListNode* head)
    {
        if(!head) return;
        solve(head, head -> next);
        if(m == mid) return;
        ListNode* nex = m -> next;
        m -> next = head;
        head -> next = nex;
        if(prev != NULL)
        prev -> next = NULL;
        m = nex;
    }

    void reorderList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        m = head;
        ListNode* slow = head, *fast = head;
        while(fast && fast -> next && fast -> next -> next) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        mid = slow;
        solve(NULL, head);
    }
};