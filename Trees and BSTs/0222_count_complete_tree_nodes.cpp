using namespace std;
/** struct TreeNode { int val; TreeNode *left; TreeNode *right; }; */
class Solution {
    int leftHeight(TreeNode* node) { int height=0; while(node){++height;node=node->left;} return height; }
    int rightHeight(TreeNode* node) { int height=0; while(node){++height;node=node->right;} return height; }
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int left=leftHeight(root), right=rightHeight(root);
        if (left==right) return (1 << left) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
