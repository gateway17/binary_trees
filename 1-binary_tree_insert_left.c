
#include "binary_trees.h"

/**
 *
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

  binary_tree_t *node;

  node = malloc(sizeof(binary_tree_t));
  if ( node == NULL)
  {
    return NULL;
  }




  node->parent = parent;
  node->n = value;
  parent->left = node;

  if (parent == NULL)
    return NULL;
  else
    return node;


}

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_left(root->right, 128);
    binary_tree_insert_left(root, 54);
    binary_tree_print(root);
    return (0);
}
