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
    typedef vector<int> :: iterator iter;
    TreeNode* dfs(iter pre, iter in, int len){
        if(len==0)
            return nullptr;
        TreeNode *root = new TreeNode(*pre);
        int p = find(in, in+len, root->val) -in;
    
        root->left= dfs(pre+1,in,p);
        root->right= dfs(pre+1+p,in+p+1, len-p-1);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return dfs(preorder.begin(),inorder.begin(), preorder.size());
    }
};