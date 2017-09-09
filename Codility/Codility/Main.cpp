#include "OtherFunc.h"
#include "ArrayFunc.h"
#include "Sort.h"
#include "BinaryTree.h"


void main()
{
    // Setup binary tree
    BiTreeNode *pRoot = CreateTreeNode(4);
    pRoot->left = CreateTreeNode(5);
    pRoot->left->left = CreateTreeNode(4);
    pRoot->left->left->left = CreateTreeNode(5);
    pRoot->right = CreateTreeNode(6);
    pRoot->right->left = CreateTreeNode(1);
    pRoot->right->right = CreateTreeNode(6);

    // Find maximum distinct nodes from root to leaf
    unordered_map<int, int> table;
    int maxNodes = 0;
    findMax(pRoot, table, maxNodes);
}