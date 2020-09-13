/* Trees                                                    
   Description: Creating a tree structure
*/

#include<bits/stdc++.h>

struct Node {
    int data;
    Node* left; 
    Node* right;
    
    Node(int key) {
        data = key;
        left = right = NULL;
    }
};

void inorder(Node* temp) {
    if (!temp) {
        return;
    }
    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}

int main() {
    Node* root = new Node(2);
    
    root->left = new Node(4);
    root->left->left = new Node(6);
    root->right = new Node(8);
    root->right->left = new Node(10);
    root->right->right = new Node(12);
    
    cout << "Inorder traversal of the created tree:" <<endl;
    inorder(root);
    return 0;
}


