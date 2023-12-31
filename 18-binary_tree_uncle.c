#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle of
 * Return: pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	grandparent = node->parent->parent;
	return (grandparent->left == node->parent
			? grandparent->right
			: grandparent->left);
}
