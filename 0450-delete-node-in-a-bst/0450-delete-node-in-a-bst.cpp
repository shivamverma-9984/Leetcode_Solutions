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
 
   void inorder(TreeNode*root, vector<int>&result,int key){
        if(root==NULL)
             return ;
        inorder(root->left,result,key);
        if(root->val!=key)
        {
            result.push_back(root->val);
        }
        inorder(root->right,result,key);
    }
   TreeNode*BST(int i,int j,vector<int>& nums)
   {
       if(i>j)
          return NULL;
        int mid=i+(j-i)/2;
        TreeNode*root=new TreeNode(nums[mid]);
        root->left=BST(i,mid-1,nums);
        root->right=BST(mid+1,j,nums);
        return root;

   }
        
    TreeNode* deleteNode(TreeNode* root, int key) {
        vector<int>nums;
        inorder(root,nums,key);
       return  BST(0,nums.size()-1,nums);
    }
};