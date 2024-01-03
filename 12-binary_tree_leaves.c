#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 * Return: Number of leaves or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0, left_leaf, right_leaf;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);
	leaf_count = left_leaf + right_leaf;
	return (leaf_count);
}
