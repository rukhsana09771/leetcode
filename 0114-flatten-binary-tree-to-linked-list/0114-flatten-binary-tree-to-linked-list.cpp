
/* class Solution {
public:
    vector<TreeNode*> preorder(TreeNode* root){
        vector<TreeNode*> ans;
        stack<TreeNode*> st;
        if(root!=NULL) st.push(root);
        while(st.size()>0){
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp);
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left);
        }
        return ans;
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> ans = preorder(root);
        int n = ans.size();
        for(int i=0; i<n-1; i++){
            ans[i]->right = ans[i+1];
            ans[i]->left = NULL;
        }
    }
}; */

//2nd method-> Recursion
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode* l = root->left;
        TreeNode* r = root->right;
        root->left = NULL;
        root->right = NULL;
        flatten(l);
        flatten(r);
        root->right = l;
        TreeNode* temp = root;
        while(temp->right!=NULL){
            temp = temp->right;
        }
        temp->right = r;   
    }
};
