#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 * Return: a pointer to the created node/NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new-node;

	if (parent == NULL)
		return (NULL);

	new-node = malloc(sizeof(binary_tree_t));
	if (!new-node)
		return (NULL);

	new-node->n = value;
	new-node->parent = parent;
	new-node->right = NULL;
	new-node->left = parent->left;
	parent->left = new-node;
	if (new-node->left)
		new-node->left->parent = new-node;
	return (new-node);
}
