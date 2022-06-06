void Postorder(TreeNode *root,vector<int>&postorder){
    if(root==NULL) return;
    Postorder(root->left,postorder);
    Postorder(root->right,postorder);
    postorder.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int>postorder;
    Postorder(root,postorder);
    return postorder;
}
