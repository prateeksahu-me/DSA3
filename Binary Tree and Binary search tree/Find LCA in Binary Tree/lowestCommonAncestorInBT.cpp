

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

TreeNode* lowestCommonAncestorInBST(TreeNode *root, TreeNode *p, TreeNode *q) {
    TreeNode *lca = root;

     if (root == NULL || root == p || root == q) {
            return root;
        }
        TreeNode* left = lowestCommonAncestorInBST(root->left, p, q);
        TreeNode* right = lowestCommonAncestorInBST(root->right, p, q);

        //result
        if(left == NULL) {
            return right;
        }
        else if(right == NULL) {
            return left;
        }
        else { //both left and right are not null, we found our result
            return root;
        }
}
