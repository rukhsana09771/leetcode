class Solution {
public:
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    void nthLevel(TreeNode* root, int curr, int level, vector<int>& v){
        if(root==NULL) return;
        if(curr==level){
            v.push_back(root->val);
            return;
        }
        if(level%2!=0){
            nthLevel(root->left, curr+1, level, v);
            nthLevel(root->right, curr+1, level, v);
        }else{
            nthLevel(root->right, curr+1, level, v);
            nthLevel(root->left, curr+1, level, v);
        }
    }

    void lOrder(TreeNode* root, vector<vector<int>>& ans){
        int n = levels(root);
        for(int i=1; i<=n; i++){
            vector<int> v;
            nthLevel(root, 1, i, v);
            ans.push_back(v);
            cout<<endl;
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lOrder(root, ans);
        return ans;
    }
};