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
    bool isPalindrome(ListNode* head) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        
        vector<int> n;
        ListNode* res = head;
        while(res) {
            n.emplace_back(res -> val);
            res = res -> next;
        }
        
        vector<int> reversed = n;
        reverse(reversed.begin(), reversed.end());
        
        return n == reversed;
    }
};