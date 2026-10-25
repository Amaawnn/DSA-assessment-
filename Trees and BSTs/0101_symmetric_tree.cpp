using namespace std;
/** struct TreeNode { int val; TreeNode *left; TreeNode *right; }; */
class Solution {
    bool mirror(TreeNode* a, TreeNode* b) { if (!a || !b) return a == b; return a->val == b->val && mirror(a->left, b->right) && mirror(a->right, b->left); }
public:
    bool isSymmetric(TreeNode* root) { return !root || mirror(root->left, root->right); }
};
