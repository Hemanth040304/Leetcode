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
typedef long long ll;
class Solution {
public:
    ll sum=0,x=0;
    void Sum(TreeNode *root,ll t){
        if(root==NULL)return;
        t=t*10+root->val;
        if(root->left==NULL and root->right==NULL){
            sum+=t;
        }
        Sum(root->left,t);
        Sum(root->right,t);
    }
    int sumNumbers(TreeNode* root) {
        Sum(root,0);
        return sum;
    }
};