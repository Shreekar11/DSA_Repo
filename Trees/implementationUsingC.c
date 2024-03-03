#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void preOrder(struct Node *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct Node *root)
{
    if (root == NULL)
        return;
        
    preOrder(root->left);
    preOrder(root->right);
    printf("%d ", root->data);
} 
void inOrder(struct Node *root)
{
    if (root == NULL)
        return;
        
    preOrder(root->left);
    printf("%d ", root->data);
    preOrder(root->right);
}

int main()
{

    // constructing a tree
    struct Node *root = createNode(1);
    struct Node *root_1 = createNode(2);
    struct Node *root_2 = createNode(3);

    root->left = root_1;
    root->right = root_2;

    postOrder(root);

    return 0;
}