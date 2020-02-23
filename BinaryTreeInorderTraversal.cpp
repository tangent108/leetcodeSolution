/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root==NULL)
            return v;
        else{
             stack<TreeNode*> s;
            TreeNode *node=root;
            while(node!=NULL || s.size() > 0){
                if(node!=NULL){
                    s.push(node);
                    node=node->left;
                }
                else{
                    node = s.top();
                    s.pop();
                    v.push_back(node->val);
                    node=node->right;
                }
            }
            
        }
        
        return v;
       
        
    }
};
