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
    int solveUsingRecursion(TreeNode* root,unordered_map<TreeNode*,int>&dp)
    {
        if(!root)return 0;

        if(dp.find(root) != dp.end())return dp[root];
        int robThisHouse =0, dontRobThisHouse =0;
        

        robThisHouse +=root->val;
        if(root->left)
            robThisHouse+=  solveUsingRecursion(root->left->left,dp) +  solveUsingRecursion(root->left->right,dp);
        if(root->right)
            robThisHouse+=  solveUsingRecursion(root->right->left,dp) +  solveUsingRecursion(root->right->right,dp);

        

        dontRobThisHouse  =  solveUsingRecursion(root->left,dp) + solveUsingRecursion(root->right,dp);

       
        return dp[root] = max(robThisHouse , dontRobThisHouse);
    }
    int rob(TreeNode* root) {
        unordered_map<TreeNode *,int>dp;
        return solveUsingRecursion(root,dp);
    }
};