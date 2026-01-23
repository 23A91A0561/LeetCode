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
14    void count(TreeNode* root,int& c)
15    {
16        if(!root)
17        {
18            return;
19        }
20        count(root->left,c);
21        c++;
22        count(root->right,c);
23    }
24    int countNodes(TreeNode* root) {
25        int c=0;
26        count(root,c);
27        return c;
28    }
29};