#include <bits/stdc++.h>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* right;
    TreeNode* left;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *right, TreeNode *left) : val(x), right(right), left(left) {}
};

TreeNode* makeatree(vector<int>& arr, int i, int n){
    if(i >= n) return nullptr;
    
    TreeNode* root = new TreeNode(arr[i]);

    root->right = makeatree(arr, 2*i + 1, n);
    root->left = makeatree(arr, 2*i + 2, n);

    return root;

}

void disptree(TreeNode* root, queue<int>& q){
    if(root == nullptr) return;

    



}

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    TreeNode* root;
    int n = arr.size();
    queue<int> q;
    root = makeatree(arr, 0, n);
    disptree(root, q);
    return 0;
}

