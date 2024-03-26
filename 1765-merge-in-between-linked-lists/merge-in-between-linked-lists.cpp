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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);


        int n = 0;
        ListNode* list2Last = list2;

        while(list2Last -> next != NULL){
            list2Last = list2Last -> next;
        }

        ListNode* treverse = list1;

        while(treverse){
            if(n == a - 1){
                ListNode *nn = treverse -> next;
                treverse -> next = list2;
                treverse = nn;
            }
            else if(n == b){
                list2Last -> next = treverse;
                return list1;
            }
            n++;
            treverse = treverse -> next;
        }

        return list1;
    }
};