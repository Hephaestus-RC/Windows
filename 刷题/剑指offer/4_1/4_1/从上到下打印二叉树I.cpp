
#if 0
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	vector<int> levelOrder(TreeNode* root) {
		vector<int> res;
		if (root == nullptr)
			return res;
		queue<TreeNode*> q;
		q.push(root);
		TreeNode* temp;
		while (!q.empty())
		{
			temp = q.front();
			q.pop();
			if (temp->left) q.push(temp->left);
			if (temp->right) q.push(temp->right);
			res.push_back(temp->val);
		}
		return res;
	}
};
#endif