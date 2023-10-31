#include "binary_trees.h"

/**
 * binary_tree_node - function creates new binary tree node
 * @parent: pointer to the parent node
 * @value: value
 * Return: the pointer to the new node / null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	/*allocate memory*/
	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/* assign values to the node properties*/
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
