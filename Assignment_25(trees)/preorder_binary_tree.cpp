void recursion(TreeNode* root,vector<int> &ans){
    if(root!=NULL){
       ans.push_back(root->val) ;
        recursion(root->left,ans);
        recursion(root-> right,ans);
        
    }
    
    
}
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        
        if(root==NULL){
            return ans;
        }
       recursion(root,ans);
        return ans; 
    }
   
};
