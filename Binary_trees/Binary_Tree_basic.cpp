#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;

void printTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left)
    {
        cout << "L" << root->left->data;
    }

    if (root->right)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}

BinaryTreeNode<int> *takeInput()
{

    int rootData;
    cout << "Enter Data" << endl;
    cin >> rootData;
    if (rootData == -1)
    { // input -1 means the node is empty.(no data)
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();

    root->left = leftChild;
    root->right = rightChild;
    return root;
}

BinaryTreeNode<int> *takeInputLevelWise()
{
}

int main()
{
    // BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int> *Node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> *Node2 = new BinaryTreeNode<int>(3);
    // root->left = Node1;
    // root->right = Node2;

    BinaryTreeNode<int> *root = takeInput();
    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;
    printTree(root);
}