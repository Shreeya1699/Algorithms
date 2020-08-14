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
    bool util(TreeNode* p,TreeNode* q){
        if(!p &&!q)
            return true;
        if(!p || !q)
            return false;
        return(p->val==q->val)&&util(p->right,q->left)&&util(p->left,q->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        return util(root,root);
    }
};
