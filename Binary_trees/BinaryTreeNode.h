template <typename T> // used so that we can input all datatypes in the tree.

class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(T data)
    { // Constructor
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode()
    {                // destructor
        delete left; // even if the
        delete right;
    }
};