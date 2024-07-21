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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        if(root->left==NULL and root->right==NULL)return 1;
        queue<pair<TreeNode*,int>>Q;
        Q.push({root,0});
        ll len = 0;
        while(!Q.empty()){
            ll size = Q.size();
            ll id = Q.front().second;
            ll last,first;
            for(int i = 0 ; i < size ; i++){
                ll cur_id = Q.front().second-id;
                root = Q.front().first;
                Q.pop();
                if(i==0)first=cur_id;
                if(i==size-1)last=cur_id;
                if(root->left){
                    Q.push({root->left,(cur_id*2+1)});
                }
                if(root->right){
                    Q.push({root->right,(cur_id*2+2)});
                }
            }
            len = max(len,last-first+1);
        }
        return len;
    }
};