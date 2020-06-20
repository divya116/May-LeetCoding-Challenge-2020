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
    int n, ans;
    
    void traverse(TreeNode * root)
    {
        if (root==NULL)
            return;
        traverse(root->left);
        n--;
        if (n==0)
        {
            ans=root->val;
            return ;
        }
        traverse(root->right);
        return;
    }
    int kthSmallest(TreeNode * root, int k) 
    {
        n=k;
        traverse(root);
        return ans;
    }
};
