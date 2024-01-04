#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - height binary tree
 * @tree: root node of tree
 * Return: height of tree
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;


	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_left++;
	height_right = binary_tree_height(tree->right);
	height_right++;
	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: Factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int rsb_height = 0, lsb_height = 0;

	if (tree == NULL)
		return (0);
	lsb_height = binary_tree_height(tree->left);
	rsb_height = binary_tree_height(tree->right);
	return (lsb_height - rsb_height);
}
