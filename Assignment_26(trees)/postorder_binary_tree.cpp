void recursion(TreeNode* root,vector<int> &A){
    if(root!=NULL){
        recursion(root->left,A);
        recursion(root->right,A);
        A.push_back(root->val);
    }
}
 
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> A;
        if(root==NULL){
            return A;
        }
        recursion(root,A);
        return A;
    }
};
