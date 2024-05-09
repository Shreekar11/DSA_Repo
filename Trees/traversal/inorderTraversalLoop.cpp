#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *left;
    Node *right;

    Node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> inorderTraversalLoop(Node* root){
    stack<Node*> st;
    vector<int> inorder;
    Node* node = root;

    while(true){
        if(node != NULL){
            st.push(node);
            node = node->left;
        }else{
            if(st.empty()){
                break;
            }
            node = st.top();
            st.pop();
            inorder.push_back(node->val);
            node = node->right;
        }
    }

    return inorder;
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);

    vector<int> ans = inorderTraversalLoop(root);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] <<" ";
    }

    return 0;
}