#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree pointer
 * Return: number of nodes counted or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (tree_size(tree) - tree_leaves(tree));
}

/**
 * tree_size - measures size of binary tree
 * @tree: tree pointer
 * Return: size of the tree or 0 if tree is NULL
 */
size_t tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree_size(tree->left) + tree_size(tree->right) + 1);
}

/**
 * tree_leaves - counts the leaves in binary tree
 * @tree: tree pointer
 * Return: number of leaves or 0 if tree is NULL
 */
size_t tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (tree_leaves(tree->left) + tree_leaves(tree->right));
}
