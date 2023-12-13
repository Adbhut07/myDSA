#include <stdio.h>

typedef struct BSTNode
{
    int key;
    BSTNode *left;
    BSTNode *right;
} BSTNode;
BSTNode *createBSTNode(int key)
{
    BSTNode *newNode = (BSTNode *)malloc(sizeof(BSTNode));
    if (newNode == NULL)
        printf("Malloc failure");

    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
void inorderTraversal(BSTNode *root)
{
    if (root == NULL)
        return;

    // Traverse left subtree
    inorderTraversal(root->left);

    // Visit current node (print)
    printf("%d ", root->key);

    // Traverse right subtree
    inorderTraversal(root->right);
}

BSTNode *insert(BSTNode *root, int key)
{
    if (root == NULL)
        return createBSTNode(key);
    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    return root;
}

BSTNode *findMin(BSTNode *node)
{

    while (node->left != NULL)
        node = node->left;

    return node;
}

BSTNode *delete(BSTNode *root, int key)
{

    if (root == NULL)
        return root;

    if (key < root->key)
        root->left = delete (root->left, key);
    else if (key > root->key)
        root->right = delete (root->right, key);

    else
    {
        if (root->left == NULL)
        {
            BSTNode *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            BSTNode *temp = root->left;
            free(root);
            return temp;
        }
        BSTNode *temp = findMin(root->right);
        root->key = temp->key;
        root->right = delete (root->right, temp->key);
    }
    return root;
}



int main()
{
    return 0;
}