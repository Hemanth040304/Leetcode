class Solution {
public:

    string dfs(TreeNode* root, string ans) {
        if (root == NULL) return "|";
        ans = char('a' + root -> val) + ans;
        if (root -> left == NULL and root -> right == NULL) return ans;
        return min(dfs(root -> left, ans), dfs(root -> right, ans));
    }

    string smallestFromLeaf(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        if (root == NULL) return "";
        return dfs(root, "");
    }
};
