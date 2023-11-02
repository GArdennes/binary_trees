#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = parent->right;
	new->parent = parent;

	if (new->right != NULL)
		new->right->parent = new;

	parent->right = new;
	return (new);
}
