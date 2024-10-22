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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> ans;
        vector<vector<int>> levelOrd;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++) {
                TreeNode *node = q.front();
                q.pop();
                if (node -> left) q.push(node -> left);
                if (node -> right) q.push(node -> right);
                level.emplace_back(node -> val);
            }
            levelOrd.push_back(level);
        }

        for (auto v : levelOrd) {
            long long sum = 0;
            for (int num : v) sum += num;
            ans.emplace_back(sum);
        }

        sort(ans.rbegin(), ans.rend());
        if (k > ans.size()) return -1;
        return ans[k - 1];
    }
};