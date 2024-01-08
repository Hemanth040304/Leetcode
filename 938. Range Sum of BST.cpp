//https://leetcode.com/problems/range-sum-of-bst/submissions/1140401262/?envType=daily-question&envId=2024-01-08

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

    void fun(int &ans, TreeNode* root, int low, int high){
        if(root==NULL)return;
        //if(root->left==NULL and root->right==NULL)return;
        //cout<<root->val<<" ";
        /*if(root->val==low or root->val==high){
            ans+=root->val;
            cout<<root->val<<"\n";
            return;
        }
        else if(root->val>low)fun(ans,root->left,low,high);
        else fun(ans,root->right,low,high);
        if(root->val>=low or root->val<=high){
            ans+=root->val;
            cout<<root->val<<"\n";
        }*/
        fun(ans,root->left,low,high);
        fun(ans,root->right,low,high);
        if(root->val>=low and root->val<=high){
            ans+=root->val;
            cout<<root->val<<"\n";
        }

    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)return 0;
        int ans=0;
        fun(ans,root,low,high);
        return ans;
    }
};
