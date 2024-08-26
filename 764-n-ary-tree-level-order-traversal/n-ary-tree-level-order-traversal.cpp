/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    void traversal(Node* root, int lev, vector<vector<int>>& ans) {
        if (!root) return;
        if (ans.size() == lev) ans.push_back({});
        ans[lev].emplace_back(root -> val);
        for (auto& child : root -> children) traversal(child, lev + 1, ans);
    }

public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        traversal(root, 0, ans);
        return ans;
    }
};
