#pragma once
#include <string>
struct TreeNode
{
    int       val;
    TreeNode* left;
    TreeNode* right;
    TreeNode()
        : val(0)
        , left(nullptr)
        , right(nullptr)
    {}
    TreeNode(int x)
        : val(x)
        , left(nullptr)
        , right(nullptr)
    {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x)
        , left(left)
        , right(right)
    {}

    static TreeNode* stringToTreeNode(std::string input);

    static std::string treeNodeToString(TreeNode*);
};

