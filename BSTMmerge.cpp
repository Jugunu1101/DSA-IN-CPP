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
    void inorder(TreeNode *root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    vector<int> merge_arr(vector<int> &a,vector<int>&b){
        vector<int> ans(a.size()+b.size());
        int i,j=0;
        int k=0;
        while(i < a.size() && j < b.size()){ 
            if(a[i] <b[j]){
                ans[k++]=a[i];
                i++;
            }
            else {
                ans[k++]=b[j];
                j++;
            }
        }
        while(i<a.size()){
            ans[k++]=a[i];
            i++;
        }
         while(j<b.size()){
            ans[k++]=a[j];
            j++;
        }
        return ans;
    }
    TreeNode*inordertobst(int s,int e,vector<int>&in){
        if(s>e){
            return NULL;
        }
        int mid=(s+e)/2;
        TreeNode *root=new TreeNode<int>(in[mid]);
        root->left=inordertobst(s,mid-1,in);
        root->right=inordertobst(mid+1,e,in);
        return root;
    }
    TreeNode* canMerge(vector<TreeNode*>& trees) {
        // 1> inorder save
        vector<int>b1,b2;
        inorder(root,b1);
        inorder(root,b2);
        // 2> merge call
        vector<int>ans=merge_arr(b1,b1);
        // 3> 
        int s=0;
        int e=ans.size()-1;
        return inordertobst(s,e,ans);
    }
};