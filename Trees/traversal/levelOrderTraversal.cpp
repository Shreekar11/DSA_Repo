#include<bits/stdc++.h>
using namespace std;

class Node { 
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

vector<vector<int>> levelOrderTraversal(Node* root){
    queue<Node*> q;
    vector<vector<int>> ans;
    if(root == NULL){
        return ans;
    }
    q.push(root);

    vector<int> level;
    while(!q.empty()){
        for(int i=0; i<q.size(); i++){
            Node* res = q.front();
            q.pop();

            if(res->left){
                q.push(res->left);
            }

            if(res->right){
                q.push(res->right);
            }   

            level.push_back(res->val);
        }

        ans.push_back(level);
    }

    return ans;
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> ans = levelOrderTraversal(root);

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << ans[i][j] <<" ";
        }cout << endl;
    }

    return 0;
}