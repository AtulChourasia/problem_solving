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
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long>lsum;
        if(root == NULL){
            return -1;
        }
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){

            int s = q.size();
            long long  sum = 0;
            for(int i = 0; i < s; i++){
                TreeNode* cur = q.front();
                q.pop();
                sum += cur->val;
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                
            }
            lsum.push_back(sum);
        }

        sort(lsum.begin(),lsum.end(), greater<long long>());

        if(lsum.size() < k) return -1;
         return lsum[k-1];

    }
};