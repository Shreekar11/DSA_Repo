#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

/*
pre-order traversal : 

1) root -> left -> right
2) TC - O(N)
3) SC - O(N) 
*/
void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->val << " -> ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

/*
in-order traversal : 

1) left -> root -> right
2) TC - O(N)
3) SC - O(N) 
*/

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout << root->val <<" -> ";
    inOrderTraversal(root->right);
}

/*
post-order traversal : 

1) left -> right -> root
2) TC - O(N)
3) SC - O(N) 
*/
void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->val << " -> ";
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
    preOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);

    return 0;
}