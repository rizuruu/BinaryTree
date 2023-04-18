#include "BinaryTree.h"
#include <iostream>

TreeNode* BinaryTree::makeNode(char data)
{
    TreeNode* newNode;
    newNode = new TreeNode();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

TreeNode* BinaryTree::makeTree()
{
    TreeNode* head = makeNode('a');
    head->left = makeNode('m');
    head->right = makeNode('j');
    head->right->right = makeNode('c');
    head->right->left = makeNode('k');
    head->right->left->left = makeNode('b');
    head->right->left->right = makeNode('r');
    printf(" %c", head->data);
    return head;
}

void BinaryTree::preOrderTraverse(TreeNode* t) 
{
    printf(" %c", t->data);
    if (t->left != nullptr)
        preOrderTraverse(t->left);
    if (t->right != nullptr)
        preOrderTraverse(t->right);
}
