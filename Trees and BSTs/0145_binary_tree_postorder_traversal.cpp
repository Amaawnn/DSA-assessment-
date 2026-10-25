#include <vector>
using namespace std;
/** struct TreeNode { int val; TreeNode *left; TreeNode *right; }; */
class Solution {
    void traverse(TreeNode* node, vector<int>& result) { if(!node)return; traverse(node->left,result); traverse(node->right,result); result.push_back(node->val); }
public:
    vector<int> postorderTraversal(TreeNode* root) { vector<int> result; traverse(root,result); return result; }
};
