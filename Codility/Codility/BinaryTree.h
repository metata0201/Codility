#pragma once
#include <unordered_map>

using namespace std;

struct BiTreeNode
{
    int val;
    BiTreeNode *left, *right;

    BiTreeNode() :val(0), left(nullptr), right(nullptr){}
};

BiTreeNode* CreateTreeNode(int value);

/*The problem is to find out a path from root to leaf with the max number of distinct nodes.For example, with following binary tree :
                    4
                  /   \
                 5     6
                /     / \
               4     1   6
              /
             5
The path with max number of distinct nodes is: 4->6->1 and the function should return 3.
Assume that:
    N is an integer within the range [1,50 000]
    The height of tree T(number of edges on the longest path from root to leaf) is within the range [0, 3 5000]
    Each value in the tree T is an integer within the range [1, N]

Complexity:
    Expected worst-case time complexity is O(N).
    Expected worst-case space complexity is O(N).
*/
void findMax(BiTreeNode *root, unordered_map<int, int> &hashTable, int &max);