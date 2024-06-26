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

    TreeNode* Balance(vector<int> &inOrd, int l, int h){
        if(l > h) return nullptr;

        int m = l + (h - l) / 2;
        TreeNode* root = new TreeNode(inOrd[m]);
        root -> left = Balance(inOrd, l, m - 1);
        root -> right = Balance(inOrd, m + 1, h);

        return root;
    }

    void inOrder(TreeNode* root, vector<int> &inOrd){
        if(root == NULL) return;

        inOrder(root -> left, inOrd);
        inOrd.emplace_back(root -> val);
        inOrder(root -> right, inOrd);
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inOrd;
        inOrder(root, inOrd);

        return Balance(inOrd, 0, inOrd.size() - 1);
    }
};