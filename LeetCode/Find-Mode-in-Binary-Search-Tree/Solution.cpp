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
14    map<int,int>m;
15    void dfs(TreeNode* root)
16    {
17        if(root==NULL)
18        {
19            return;
20        }
21        dfs(root->left);
22        m[root->val]++;
23        dfs(root->right);
24    }
25    vector<int> findMode(TreeNode* root) {
26        if(!root)
27        {
28            return {};
29        }
30        dfs(root);
31        int Max=INT_MIN;
32        vector<int>v;
33        for(auto &i:m)
34        {
35            if(i.second>Max)
36            {
37                Max=i.second;
38            }
39        }
40        for(auto &i:m)
41        {
42            if(Max==i.second)
43            {
44                v.push_back(i.first);
45            }
46        }
47        return v;
48    }
49};