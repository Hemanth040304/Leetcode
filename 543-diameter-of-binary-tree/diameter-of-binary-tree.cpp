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
int m=0;
    int height(TreeNode* root){
        if(root==NULL)return 0;
        int c = height(root->left);
        int d = height(root->right);
        m = max(m,d +c+1);
        return max(c,d)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return m-1;
    }
};