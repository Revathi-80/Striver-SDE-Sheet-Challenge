void Preorder(TreeNode *root,vector<int>&preorder){
    if(root==NULL)
        return;
    preorder.push_back(root->data);
    Preorder(root->left,preorder);
    Preorder(root->right,preorder);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
   vector<int>preorder;
    Preorder(root,preorder);
    return preorder;
}
