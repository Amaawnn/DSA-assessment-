#include <algorithm>
using namespace std;
/** struct TreeNode { int val; TreeNode *left; TreeNode *right; }; */
class Solution {
    int diameter=0;
    int depth(TreeNode* node){if(!node)return 0;int left=depth(node->left),right=depth(node->right);diameter=max(diameter,left+right);return 1+max(left,right);}
public:
    int diameterOfBinaryTree(TreeNode* root) { diameter=0; depth(root); return diameter; }
};
