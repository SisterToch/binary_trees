#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (!parent)
		return (NULL);

	new_right = malloc(sizeof(binary_tree_t));
	if (!new_right)
		return (NULL);

	new_right->n = value;
	new_right->parent = parent;
	new_right->left = NULL;
	new_right->right = parent->right;
	parent->right = new_right;
	if (new_right->right)
		new_right->right->parent = new_right;
	return (new_right);
}
