#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (parent == NULL || new == NULL)
		return (NULL);
	new->n = value;
	new->left = parent->left;
	new->right = NULL;
	new->parent = parent;

	if (new->left != NULL)
		new->left->parent = new;
	parent->left = new;
	return (new);
}

