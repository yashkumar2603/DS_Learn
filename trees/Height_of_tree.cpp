#include <bits/stdc++.h>
#include <queue>
#include "TreeNode.h"
using namespace std;

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

int height(TreeNode<int> *root)
{
    int Height = 0;
    int count = 0;
    if (root == NULL)
    {
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        Height = height(root->children[i]);
        count++;
    }
}

int main()
{
    TreeNode<int> *root = takeInput();
}