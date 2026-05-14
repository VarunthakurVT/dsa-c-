#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root) {
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new Node(data);

    cout << "Enter data for left child of " << data << ": ";
    root->left = buildTree(root->left);

    cout << "Enter data for right child of " << data << ": ";
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node* root) {
    if (root == NULL) {
        cout << "Tree is empty!" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";

            if (temp->left)  q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
}

void inOrder(Node* root) {
    if (root == NULL) return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root) {
    if (root == NULL) return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int countLeafNodes(Node* root) {
    // Base case: empty tree
    if (root == NULL) return 0;

    // If leaf node
    if (root->left == NULL && root->right == NULL) return 1;

    // Recursively count in left and right subtrees
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main() {
    Node* root = NULL;
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 datA
    cout << "Enter root data (-1 for NULL): ";
    root = buildTree(root);

    cout << "\n========== Level Order Traversal ==========" << endl;
    levelOrderTraversal(root);

    cout << "\n========== Inorder Traversal ==========" << endl;
    inOrder(root);
    cout << endl;

    cout << "\n========== Preorder Traversal ==========" << endl;
    preOrder(root);
    cout << endl;

    cout << "\n========== Postorder Traversal ==========" << endl;
    postOrder(root);
    cout << endl;

    cout << "\n========== Leaf Node Count ==========" << endl;
    cout << "Number of leaf nodes: " << countLeafNodes(root) << endl;

    return 0;
}