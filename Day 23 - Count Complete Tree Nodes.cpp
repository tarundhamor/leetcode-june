class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == NULL)
            return 0;
        
        int height = 0;
        int count = 0;
        TreeNode *left = root->left;
        TreeNode *right = root->left;

        while(right != NULL)
        {
            height++;
            left = left->left;
            right = right->right;
        }
        
        count = (1 << height) - 1;
        if (left == NULL)
            return 1 + count + countNodes(root->right);
                
        return 1 + count + countNodes(root->left);
    }
};