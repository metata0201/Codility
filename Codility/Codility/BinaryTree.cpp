#include "BinaryTree.h"

BiTreeNode* CreateTreeNode(int value)
{
    BiTreeNode *pNode = new BiTreeNode;
    pNode->val = value;
    return pNode;
}

void findMax(BiTreeNode *root, unordered_map<int, int> &hashTable, int &max)
{
    if (root == nullptr)
    {
        if (max < hashTable.size())
            max = hashTable.size();
        return;
    }

    // If the key(root->val) has never been in the table, insert the key and set its mapped value to 1, otherwise increase its mapped value by 1
    if (hashTable.count(root->val) == 0)    // root
        hashTable[root->val] = 1;
    else
        hashTable[root->val]++;

    findMax(root->left, hashTable, max);    // left child
    findMax(root->right, hashTable, max);   // right child
    hashTable[root->val]--;
    if (hashTable[root->val] == 0)
    {
        hashTable.erase(root->val);
    }
}