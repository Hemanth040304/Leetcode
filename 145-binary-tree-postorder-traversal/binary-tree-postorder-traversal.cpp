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
private:
    void postOrder(TreeNode* root, vector <int> &ord) {
        if(!root) return;

        postOrder (root -> left, ord);
        postOrder (root -> right, ord);
        
        ord.emplace_back (root -> val);
    }

public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ord;
        postOrder (root, ord);
        return ord;
    }
};