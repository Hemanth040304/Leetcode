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

    void fun(TreeNode *root,vector<vector<int>>&v,int l){
        if(root==NULL)return;
        if(v.size()==l)v.push_back({root->val});
        else v[l].push_back(root->val);
        fun(root->left,v,l+1);
        fun(root->right,v,l+1);
    }

    bool isEvenOddTree(TreeNode* root) {
        vector<vector<int>>v;
        fun(root,v,0);
        for (int i = 0 ; i < v.size() ; i++){
            int x = 0;
            if(i % 2 == 0){
                for(int j = 0 ; j < v[i].size()-1; j++){
                    if(v[i][j] < v[i][j+1])x++;
                    cout<<v[i][j]<<" ";
                }
                if(x + 1 < v[i].size() )return false;
                x = 0;
                for(int j = 0 ; j < v[i].size() ; j++){
                    if(v[i][j] % 2) x++;
                }
                if( x != v[i].size())return false;
            }
            else{
                x = 0;
                for(int j = 0 ; j < v[i].size()-1; j++){
                    if(v[i][j] > v[i][j+1])x++;
                    cout<<v[i][j]<<" ";
                }
                if(x + 1 < v[i].size() )return false;
                x = 0;
                for(int j = 0 ; j < v[i].size() ; j++){
                    if(v[i][j] % 2 == 0) x++;
                }
                if( x != v[i].size())return false;
            }
        }
        return true;
    }
};