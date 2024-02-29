#include "binary_trees.h"

/**
 * binary_tree_node - Create new binary tree node
 * @parent: pointer to parent node
 * @value: new node value
 * Return: pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declaration of new node */
	binary_tree_t *newNode;

	/* memory allocation for node */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/* assign values */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}

