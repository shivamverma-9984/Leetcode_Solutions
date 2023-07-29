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
 bool path(TreeNode* root, int t,int sum)
    {
        if(root==NULL)
            return false ;
        sum+=root->val;
        if(root->right==NULL&& root->left==NULL && sum==t){
         return true;
          }
        return path(root->left,t,sum)+path(root->right,t,sum);
        
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        return path(root,targetSum,sum);
    }
};