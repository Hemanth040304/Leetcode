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
    bool fun(TreeNode *r1,TreeNode *r2,bool x){
        if((r1==NULL and r2!=NULL)or(r1!=NULL and r2==NULL)){
            x = false;
            return x;
        }
        if(r1==NULL and r2==NULL)return x;
        if(r1->val==r2->val)x=true;
        else x = false;
        return fun(r1->left,r2->left,x) && fun(r1->right,r2->right,x);
    }
    bool isSameTree(TreeNode* r1, TreeNode* r2) {
        if(r1==NULL and r2==NULL)return true;
        return fun(r1,r2,false);
    }
};