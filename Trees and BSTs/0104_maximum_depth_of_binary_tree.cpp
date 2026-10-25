#include <algorithm>
using namespace std;
/** struct TreeNode { int val; TreeNode *left; TreeNode *right; }; */
class Solution {
public:
    int maxDepth(TreeNode* root) { return root ? 1 + max(maxDepth(root->left), maxDepth(root->right)) : 0; }
};
