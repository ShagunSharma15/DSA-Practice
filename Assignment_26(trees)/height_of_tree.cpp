 int height(Node* root) {
       int leftheight=-1,rightheight=-1;
       
       if(root->left){
           leftheight=height(root->left);
       }
       
       if(root->right){
           rightheight=height(root->right);
       }
       return max(leftheight,rightheight)+1;
    }
