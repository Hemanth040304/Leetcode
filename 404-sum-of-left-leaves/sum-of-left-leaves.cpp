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

    void LeftSum(TreeNode *root, int &ans, int l, int r){
        if(root == NULL)return;
        if(root -> left == NULL and root -> right == NULL and l != 1) ans += root -> val;
        LeftSum(root -> right, ans, 1, 0);
        LeftSum(root -> left, ans, 0 , 1);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        if(root -> left == NULL and root -> right == NULL)return 0;
        int ans = 0;
        LeftSum(root, ans, 0, 0);
        return ans;
    }
};