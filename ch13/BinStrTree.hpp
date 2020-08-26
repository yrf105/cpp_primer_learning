#ifndef BINSTRTREE_HPP
#define BINSTRTREE_HPP

#include "TreeNode.hpp"

class BinStrTree {

public:
    BinStrTree() = default;
    BinStrTree(const BinStrTree& binStrTree) :
        root(new TreeNode(*binStrTree.root)) { };
    BinStrTree& operator=(const BinStrTree& binStrTree) {
        TreeNode* tmp_root = new TreeNode(*binStrTree.root);
        delete root;
        root = tmp_root;
        return *this;
    }
    ~BinStrTree(){
        delete root;
    }

private:
    TreeNode* root;

};

#endif