
/*
Definition of TreeNode
class TreeNode {
public:
    long val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() {}

    TreeNode (long x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
*/
void mirror(TreeNode* node) 
{
    if (node == NULL) 
        return; 
    else
    {
        TreeNode* temp;
          
        /* do the subtrees */
        mirror(node->left);
        mirror(node->right);
      
        /* swap the pointers in this node */
        temp     = node->left;
        node->left = node->right;
        node->right = temp;
    }
} 


TreeNode* mirrorBinaryTree(TreeNode* node) {

    mirror(node);
    
    return node;


}