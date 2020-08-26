#ifndef TREENODE_HPP
#define TREENODE_HPP

#include <string> 

class TreeNode {

public:
    TreeNode() = default;
    TreeNode(const TreeNode& treeNode) :
        value(treeNode.value), count(treeNode.count),
        left(treeNode.left), right(treeNode.right) { ++*treeNode.count; }
    TreeNode& operator=(const TreeNode& treeNode) {
        ++ *treeNode.count;
        if (--*count == 0) {
            delete left;
            delete right;
            delete count;
        }
        TreeNode* tmp_left = left;
        TreeNode* tmp_right = right;
        
        left = tmp_left;
        right = tmp_right;
        value = treeNode.value;
        count = treeNode.count;
        return *this;
    }
    ~TreeNode() {
        if (--*count == 0) {
            delete left;
            delete right;
            delete count;
        }
    }

private:
    std::string value;
    int *count;
    TreeNode *left;
    TreeNode *right;

};

#endif