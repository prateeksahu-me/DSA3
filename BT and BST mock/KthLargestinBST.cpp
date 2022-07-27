/*
Definition for TreeNode
class TreeNode {
public:
    long val;
    TreeNode* left;
    TreeNode* right;
    TreeNode* next;
    TreeNode (long x) {
        val = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
}

Use new TreeNode(data) to create new Node
*/
TreeNode* kthlargest(TreeNode* root,int& k)
{
	if(root==NULL)
	return NULL;
	
	TreeNode* right=kthlargest(root->right,k);
	if(right!=NULL)
	return right;
	k--;
	
	if(k==0)
	return root;
	
	return kthlargest(root->left,k);
}

int kthLargestElementInABst(TreeNode *root, int k) {
    return kthlargest(root,k)->val;
}