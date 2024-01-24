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
    void fun(int &ans, TreeNode* root, vector<int>store){
        if(root==NULL)return;
        store[(root->val)-1]++;
        if(root->left==NULL and root->right==NULL){
            int o=0;
            for(auto it:store)if(it&1)o++;
            if(o<2)ans++;
        }
        fun(ans,root->left,store);
        fun(ans,root->right,store);
    }

    int pseudoPalindromicPaths (TreeNode* root) {
        if(root->left==NULL and root->right==NULL)return 1;
        int ans=0;
        vector<int>store(9, 0);
        fun(ans,root,store);
        return ans;
    }
};