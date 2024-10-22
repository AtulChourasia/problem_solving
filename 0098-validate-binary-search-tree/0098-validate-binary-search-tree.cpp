/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

int maxValue(TreeNode* root){
    if(root == NULL){
        return INT_MIN;
    }
    return max(maxValue(root->left), max(maxValue(root->right), root->val));
}

int minValue(TreeNode* root){
    if(root == NULL){
        return INT_MAX;
    }
    return min(minValue(root->left), min(minValue(root->right), root->val));
}

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;

        if(root->left != NULL && maxValue(root->left) >= root->val){
            return false;
        }
        if(root->right != NULL && minValue(root->right) <= root->val){
            return false;
        }
        return isValidBST(root->left) && isValidBST(root->right);
    }
};
