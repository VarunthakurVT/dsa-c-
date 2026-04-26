#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class BinaryTree {
public:
    int idx = -1;
    Node* buildTree(vector<int> preorder) {
        idx++;
        if (idx >= preorder.size() || preorder[idx] == -1) {
            return NULL;
        }
        Node* newNode = new Node(preorder[idx]);
        newNode->left = buildTree(preorder);
        newNode->right = buildTree(preorder);
        return newNode;
    }

    void printTree(Node* root) {
        if (root == NULL) return;
        
        cout << root->data << " ";
        printTree(root->left);
        printTree(root->right);
    }
};

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    BinaryTree tree;
    Node* root = tree.buildTree(preorder);

    cout << "Preorder Traversal of the tree: ";
    tree.printTree(root);
    cout << endl;

    return 0;
}