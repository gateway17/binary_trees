#include "binary_trees.h"

/**


 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
  

  binary_tree_t *node;

  if (parent == NULL)
    return (NULL);

  node = binary_tree_node(parent, value);
  
  if ( node == NULL)
    return (NULL);
  

  if (parent->right != NULL)
  {
    // IF THERE IS ANOTHER NODE IN RIGHT
    node->right = parent->right;
    parent->right->parent = node;
  }
  parent->right = node;

  return(node);
}

/**    node->parent = parent;


  }
  else
  {
    parent->right = node;
    node->parent = parent;
    node->left = NULL;
  }
*/





int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
    return (0);
}
