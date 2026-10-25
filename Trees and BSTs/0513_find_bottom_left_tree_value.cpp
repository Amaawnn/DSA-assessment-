#include <queue>
using namespace std;
/** struct TreeNode { int val; TreeNode *left; TreeNode *right; }; */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q; q.push(root); int value=root->val;
        while(!q.empty()){int size=q.size();value=q.front()->val;while(size--){auto n=q.front();q.pop();if(n->left)q.push(n->left);if(n->right)q.push(n->right);}}
        return value;
    }
};
