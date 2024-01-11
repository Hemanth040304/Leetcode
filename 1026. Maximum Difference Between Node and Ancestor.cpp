// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/?envType=daily-question&envId=2024-01-11


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
    void fun(TreeNode* root,int &ans,int mi,int ma){
        if(root==NULL)return;
        mi = min(mi,root->val);
        ma = max(ma,root->val);
        ans = max(ans,abs(ma-mi));
        //cout<<mi<<" "<<ma<<"\n";
        fun(root->left,ans,mi,ma);
        fun(root->right,ans,mi,ma);
    }

    int maxAncestorDiff(TreeNode* root) {
        int ans = 0;
        fun(root,ans,root->val,root->val);
        return ans;
    }
};
