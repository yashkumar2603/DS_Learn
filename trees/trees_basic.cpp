#include <bits/stdc++.h>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter the root data" << endl;
    cin >> rootData;                                   // Get the root data
    TreeNode<int> *root = new TreeNode<int>(rootData); // Put root data into newly created root node.

    queue<TreeNode<int> *> pendingNodes; // declare the queue.

    pendingNodes.push(root);         // push the root in the queue.
    while (pendingNodes.size() != 0) // continue till the pendingNodes queue becomes empty.
    {
        TreeNode<int> *front = pendingNodes.front(); // Get the front node pointer by getting the front elemnt of the queue
        pendingNodes.pop();                          // Pop the element already taken in the front node for tree.
        cout << "Enter number of children of " << front->data << endl;
        int numChild;
        cin >> numChild; // Take input about the number of children.
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter" << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData); // Create the child node.
            front->children.push_back(&child);                   // Push the child node in the parent child list.
            pendingNodes.push(child);
        }
    }
}

TreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    int n;
    cout << "Enter num of children of " << rootData << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    { // edge case, tree empty.
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    printTree(root);
    return 0;
}