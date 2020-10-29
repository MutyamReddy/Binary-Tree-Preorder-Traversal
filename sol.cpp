class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        while(root||!s.empty()){
            if(root){
                s.push(root);
                ans.push_back(root->val);
                root=root->left;
            }else{
                root=s.top();
                s.pop();
                root=root->right;
            }
        }
        return ans;
    }
};
