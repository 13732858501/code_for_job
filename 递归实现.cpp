#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> res;
        inorder(root, res);
        return res;
    }
    void inorder(TreeNode *root, vector<int> &res) {
        if (!root) return;
        if (root->left) inorder(root->left, res);
        res.push_back(root->val);
        if (root->right) inorder(root->right, res);
    }
};


int main(){
	int a[3] = [0,null,3];
	Solution s1;
	
	//s1.inorderTraversal() 
	return 0;
} 
