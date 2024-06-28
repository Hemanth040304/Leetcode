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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* fast = head, *slow = head;
        int ind = 1;
        stack<int> st;

        while(slow){
            st.push(slow -> val);

            if(ind == k){
                while(!st.empty()){
                    fast -> val = st.top();
                    st.pop();
                    fast = fast -> next;
                }
                ind = 0;
            }
            ind++;
            slow = slow -> next;
        }

        return head;
    }
};