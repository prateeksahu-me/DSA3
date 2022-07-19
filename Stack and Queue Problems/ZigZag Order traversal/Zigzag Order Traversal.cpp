/*
// Definition for TreeNode
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
*/
class BinaryTreeZigzagLevelOrderTraversal {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        vector<vector<int>> ans;
         
        while(!q.empty())
        {
            int sz = q.size();
            vector<int> curr_level;

            while(sz--){
                
                TreeNode* front = q.front();
                q.pop();
                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
                curr_level.push_back(front->val);
            }
            if(level%2!=0)
            {
                reverse(curr_level.begin(), curr_level.end());
            }
            level++;
            ans.push_back(curr_level);
        }
        return ans;
    }
};