// https://leetcode.com/problems/count-complete-tree-nodes/

int countNodes(TreeNode* root) {
    if (root == NULL) return 0;

    int c1 = countNodes(root->left);
    int c2 = countNodes(root->right);

    return c1+c2+1;
}
