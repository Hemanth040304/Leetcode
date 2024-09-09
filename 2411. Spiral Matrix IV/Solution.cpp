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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));
        
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        
        while (head) {
            for (int col = left; col <= right and head; col++) {
                ans[top][col] = head -> val;
                head = head -> next;
            }
            top++;
            
            for (int row = top; row <= bottom and head; row++) {
                ans[row][right] = head -> val;
                head = head -> next;
            }
            right--;
            
            for (int col = right; col >= left and head; col--) {
                ans[bottom][col] = head -> val;
                head = head -> next;
            }
            bottom--;
            
            for (int row = bottom; row >= top and head; row--) {
                ans[row][left] = head -> val;
                head = head -> next;
            }
            left++;
        }
        
        return ans;
    }
};