#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root
 * Return: sum or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node, right_node;

	if (tree == NULL)
		return (0);
	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + left_node + right_node);
	}
	else
	{
		return (left_node + right_node);
	}
}
