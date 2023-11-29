#include <iostream>
#include <map>
#include <queue>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

void topView(TreeNode* root) {
    if (!root) return;

    map<int, int> horizontalDistanceMap;

    queue<pair<TreeNode*, int>> q;

    q.push({root, 0});

    while (!q.empty()) {
        auto current = q.front();
        q.pop();

        TreeNode* node = current.first;
        int hd = current.second;

        if (horizontalDistanceMap.find(hd) == horizontalDistanceMap.end()) {
            horizontalDistanceMap[hd] = node->data;
        }

        if (node->left) {
            q.push({node->left, hd - 1});
        }

        if (node->right) {
            q.push({node->right, hd + 1});
        }
    }

    for (const auto& entry : horizontalDistanceMap) {
        cout << entry.second << " ";
    }
    cout << endl;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->left->right->right = new TreeNode(5);
    root->left->right->right->right = new TreeNode(6);

    cout << "Top View: ";
    topView(root);

    return 0;
}
