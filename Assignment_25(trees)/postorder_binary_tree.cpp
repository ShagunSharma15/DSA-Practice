void recursion(TreeNode* root, vector<int> &ans){
    if(root!=NULL){
        recursion(root->left,ans);
        ans.push_back(root->val);
        recursion(root->right,ans);
    }
}


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        recursion(root,ans);
        return ans;
    }
    
};
