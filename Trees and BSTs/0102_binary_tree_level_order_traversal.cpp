#include <vector>
#include <queue>
using namespace std;
/** struct TreeNode { int val; TreeNode *left; TreeNode *right; }; */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;
        queue<TreeNode*> nodes; nodes.push(root);
        while (!nodes.empty()) {
            int size=nodes.size(); vector<int> level;
            while (size--) { auto node=nodes.front(); nodes.pop(); level.push_back(node->val); if(node->left)nodes.push(node->left); if(node->right)nodes.push(node->right); }
            result.push_back(level);
        }
        return result;
    }
};
