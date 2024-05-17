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

    bool fun(TreeNode* root){
        if(root == NULL) return false;
        if(root -> left == NULL and root -> right == NULL) return root -> val;
        bool a = fun(root -> left);
        bool b = fun(root -> right);
        if(root -> val == 2) return a | b;
        else if(root -> val == 3) return a & b;
        else return false;
    }

    bool evaluateTree(TreeNode* root) {
        return fun(root);
    }
};