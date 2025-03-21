
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans){
        if(root==NULL) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> ans;
        inorder(root, ans);
        int sum = 0;
        for(int i=0; i<ans.size(); i++){
            if(ans[i]>=low && ans[i]<=high){
                sum += ans[i];
            }
        }
        return sum;
    }
};