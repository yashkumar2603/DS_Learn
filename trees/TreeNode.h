#include <vector>
using namespace std;

template <typename T>

class TreeNode
{
public:
    T data;
    vector<TreeNode *> children;

    // making a constructor to save lines of code in the .cpp file.
    TreeNode(T data)
    {
        this->data = data;
    }
};