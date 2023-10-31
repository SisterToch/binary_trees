#include "binary_trees.h"
/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree in the question
 *
 * Return: balanced factor or NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree != NULL)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}

**
 * binary_tree_height_b - Measures height of a binary tree
 * for the balance
 * @tree: the tree
 *
 * Return: the height or NULL
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			right = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((left > right) ? left : right);
	}
}

