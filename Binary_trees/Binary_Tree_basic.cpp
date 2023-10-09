#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;

int main()
{
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *Node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *Node2 = new BinaryTreeNode<int>(3);
    root->left = Node1;
    root->right = Node2;

    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;
}