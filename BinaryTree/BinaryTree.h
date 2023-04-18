#pragma once
#include "TreeNode.h"

class BinaryTree
{
public:
	TreeNode* makeNode(char data);
	TreeNode* makeTree();
	void preOrderTraverse(TreeNode* t);
};

