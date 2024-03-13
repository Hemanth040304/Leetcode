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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        ListNode *ans = new ListNode(0);
        ans -> next = head;
        ListNode *zero = ans;

        while (zero != NULL) {
            int sum = 0;
            ListNode *current = zero -> next;
            while (current != NULL) {
                sum += current -> val;
                if (sum == 0) {
                    zero -> next = current -> next;
                }
                current = current -> next;
            }
            zero = zero -> next;
        }
        return ans -> next;
    }
};