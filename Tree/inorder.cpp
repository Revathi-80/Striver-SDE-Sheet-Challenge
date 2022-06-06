void inorderTraverse(TreeNode *root,vector<int>&inorder){
    if(root==NULL)
        return ;
    inorderTraverse(root->left,inorder);
    inorder.push_back(root->data);
    inorderTraverse(root->right,inorder);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int>inorder;
    inorderTraverse(root,inorder);
    return inorder;
}
