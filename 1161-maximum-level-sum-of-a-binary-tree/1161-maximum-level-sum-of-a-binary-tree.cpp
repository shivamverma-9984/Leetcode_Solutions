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
    void inorder(TreeNode* root,map<int,int>&mp,int level)
    {
        if(root==NULL)
            return ;
        mp[level]+=root->val;
        inorder(root->left,mp,level+1);
        inorder(root->right,mp,level+1);

    }
    int maxLevelSum(TreeNode* root) {
      map<int,int>mp;
        inorder(root,mp,1);
        int l=0;
         int maxsum=INT_MIN; 
        for(auto i:mp)
        {
            if(maxsum<i.second)
            {
                l=i.first;;
                maxsum=i.second;
            }
        }
        return l;
    }
};