
class Solution {
public:
    int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void nthLevel(TreeNode* root, int curr, int level, vector<int>& ans){
    if(root==NULL) return; // base case
    if(curr==level){
         ans[curr] = root->val;
        return;
    } 
    nthLevel(root->left, curr+1, level, ans); // left
    nthLevel(root->right, curr+1, level, ans); // right
}

void levelOrder(TreeNode* root, vector<int>& ans){
    int n = ans.size();
    for(int i=0; i<n; i++){
        nthLevel(root, 0, i, ans);
    }
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root), 0);
        levelOrder(root, ans);
        return ans;
    }
};