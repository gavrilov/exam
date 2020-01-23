
struct s_node {
	int		   value;
	struct s_node *right;
	struct s_node *left;
};

void reverse_tree(struct s_node *root)
{
	struct s_node *tmp;

	if (root)
	{
		tmp = root->left;
		root->left = root->right;
		root->right = tmp;
		reverse_tree(root->right);
		reverse_tree(root->left);
	}
}

// Test 
#include <stdlib.h>
#include <stdio.h>

struct s_node *create_node(int value)
{
	struct s_node *result;

	if (!(result = (struct s_node *)malloc(sizeof(struct s_node))))
		return(NULL);
	result->value = value;
	result->left = NULL;
	result->right = NULL;
	return (result);
}

int main(void)
{
	struct s_node *root;
	root = create_node(94);
	root->right = create_node(52);
	root->left = create_node(34);
	root->left->left = create_node(1);
	root->left->left->left = create_node(20);
	root->left->right = create_node(99);
	root->left->right->left = create_node(83);
	root->left->right->left->right = create_node(61);
	root->left->right->right = create_node(39);
	root->left->right->right->left = create_node(37);
	root->left->right->right->right = create_node(67);

	reverse_tree(root);

	printf("%i\n", root->right->right->right->value); // will print 20
	printf("%i\n", root->right->left->right->left->value); // will print 61

	return (0);
}
