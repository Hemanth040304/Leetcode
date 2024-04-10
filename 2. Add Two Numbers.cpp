// https://leetcode.com/problems/add-two-numbers/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        
        int c = 0;
        ListNode *temp = l1;
        ListNode *a = new ListNode(), *ans = NULL;

        while(temp and l2){
            int x = temp -> val, y = l2 -> val;
            if(ans == NULL){
                ListNode *NN = new ListNode((x + y + c) % 10);
                a = NN;
                ans = a;
            }
            else{
                ListNode *NN = new ListNode((x + y + c) % 10);
                a -> next = NN;
                a = a -> next;
            }
            c = (x + y + c) / 10;
            temp = temp -> next;
            l2 = l2 -> next;
        }


        ListNode *t = a;
        while(temp){
            int x = temp -> val;
            ListNode *NN = new ListNode((x + c) % 10);
            a -> next = NN;
            a = a -> next;
            c = (x + c) / 10;
            t = a;
            temp = temp -> next;
        }


        while(l2){
            int x = l2 -> val;
            ListNode *NN = new ListNode((x + c) % 10);
            a -> next = NN;
            a = a -> next;
            c = (c + x) / 10;
            t = a;
            l2 = l2 -> next;
        }


        while(c){
            t -> next = new ListNode(c);
            t = t -> next;
            c /= 10;
        }


        return ans;
    }
};
