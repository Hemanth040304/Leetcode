/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int maxi = 0;

    void Last(TreeNode* root, int &ans, int depth){
        if(root == NULL) return;
        if (maxi < depth){
            ans = root -> val;
            maxi = depth;
        }
        Last(root -> left, ans, depth + 1);
        Last(root -> right, ans, depth + 1);
    }

    int findBottomLeftValue(TreeNode* root) {
        if(root -> left == NULL and root -> right == NULL)return root -> val;
        int ans;
        Last(root, ans, 0);
        return ans;
    }
};