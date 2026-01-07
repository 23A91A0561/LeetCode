1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int mod=1e9+7;
15    long long dfs(TreeNode* root,long long total,long long& Max)
16    {
17        if(root==NULL)
18        {
19            return 0;
20        }
21        long long l=dfs(root->left,total,Max);
22        long long r=dfs(root->right,total,Max);
23       ;long long sum=root->val+l+r; 
24        Max=max((total-sum)*sum,Max);
25        return sum;
26    }
27    int maxProduct(TreeNode* root) {
28        long long Max=0;
29        int total=dfs(root,0,Max);
30        dfs(root,total,Max);
31        return Max%mod;
32    }
33};