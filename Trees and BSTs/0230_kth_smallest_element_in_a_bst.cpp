#include <stack>
using namespace std;
/** struct TreeNode { int val; TreeNode *left; TreeNode *right; }; */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> nodes;
        while(root||!nodes.empty()){
            while(root){nodes.push(root);root=root->left;}
            root=nodes.top();nodes.pop();
            if(--k==0)return root->val;
            root=root->right;
        }
        return -1;
    }
};
