# C - Binary trees

This is a project about binary trees that we worked on to learn the details, advantages, and disadvantages of using trees as data structures. I implemented different types of binary trees including binary, binary search, AVL, and Max Binary Heap trees and learned how to traverse them.

## Data Structures

```
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

## Function Prototypes

| **File**                             | **Prototype**                                                                                        |
| -------------------------------- | ------------------------------------------------------------------------------------------------ |
| `binary_tree_print.c`            | `void binary_tree_print(const binary_tree_t *tree)`                                              |
| `0-binary_tree_node.c`           | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`                             |
| `1-binary_tree_insert_left.c`    | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`                      |
| `2-binary_tree_insert_right.c`   | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`                     |
| `3-binary_tree_delete.c`         | `void binary_tree_delete(binary_tree_t *tree);`                                                  |
| `4-binary_tree_is_leaf.c`        | `int binary_tree_is_leaf(const binary_tree_t *node);`                                            |
| `5-binary_tree_is_root.c`        | `int binary_tree_is_root(const binary_tree_t *node);`                                            |
| `6-binary_tree_preorder.c`       | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`                       |
| `7-binary_tree_inorder.c`        | `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`                        |
| `8-binary_tree_postorder.c`      | `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`                      |
| `9-binary_tree_height.c`         | `size_t binary_tree_height(const binary_tree_t *tree);`                                          |
| `10-binary_tree_depth.c`         | `size_t binary_tree_depth(const binary_tree_t *tree);`                                           |
| `11-binary_tree_size.c`          | `size_t binary_tree_size(const binary_tree_t *tree);`                                            |
| `12-binary_tree_leaves.c`        | `size_t binary_tree_leaves(const binary_tree_t *tree);`                                          |
| `13-binary_tree_nodes.c`         | `size_t binary_tree_nodes(const binary_tree_t *tree);`                                           |
| `14-binary_tree_balance.c`       | `int binary_tree_balance(const binary_tree_t *tree);`                                            |
| `15-binary_tree_is_full.c`       | `int binary_tree_is_full(const binary_tree_t *tree);`                                            |
| `16-binary_tree_is_perfect.c`    | `int binary_tree_is_perfect(const binary_tree_t *tree);`                                         |
| `17-binary_tree_sibling.c`       | `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`                                       |
| `18-binary_tree_uncle.c`         | `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`                                         |
| `100-binary_trees_ancestor.c`    | `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);` |
| `101-binary_tree_levelorder.c`   | `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));`                     |
| `102-binary_tree_is_complete.c`  | `int binary_tree_is_complete(const binary_tree_t *tree);`                                        |
| `103-binary_tree_rotate_left.c`  | `binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);`                                   |
| `104-binary_tree_rotate_right.c` | `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);`                                  |
| `110-binary_tree_is_bst.c`       | `int binary_tree_is_bst(const binary_tree_t *tree);`                                             |
| `111-bst_insert.c`               | `bst_t *bst_insert(bst_t **tree, int value);`                                                    |
| `112-array_to_bst.c`             | `bst_t *array_to_bst(int *array, size_t size);`                                                  |
| `113-bst_search.c`               | `bst_t *bst_search(const bst_t *tree, int value);`                                               |
| `114-bst_remove.c`               | `bst_t *bst_remove(bst_t *root, int value);`                                                     |
| `120-binary_tree_is_avl.c`       | `int binary_tree_is_avl(const binary_tree_t *tree);`                                             |
| `121-avl_insert.c`               | `avl_t *avl_insert(avl_t **tree, int value);`                                                    |
| `122-array_to_avl.c`             | `avl_t *array_to_avl(int *array, size_t size);`                                                  |

## **Tasks**

* **New Node**

  * **0-binary_tree_node.c:** This C function creates a binary tree node with a given parent and value and returns a pointer to the new node. If the function fails to create the node, it returns NULL.

* **Insert Left**

    * **1-binary_tree_insert.c:** This C function inserts a node as the left child of another node. If the given parent already has a left node, the new node takes its place, and the old left child becomes the left child of the new node. The function returns a pointer to the new node, or NULL on failure.

* **Insert Right**

    * **2-binary_tree_insert_right.c:** This C function inserts a node as the right child of another node. If the given parent already has a right node, the new node takes its place, and the old right child becomes the right child of the new node. The function returns a pointer to the new node, or NULL on failure.

* **Delete**
  * **3-binary_tree_delete.c:** This C function deletes an entire binary tree.

* **Is Leaf**
  * **4-binary_tree_is_leaf.c:** This C function checks if a given node is a leaf or not. If the node is a leaf, the function returns 1; otherwise, it returns 0.

* **Is Root**
  * **5-binary_tree_is_root.c:** This C function checks if a given node is a root or not. If the node is a root, the function returns 1; otherwise, it returns 0.

* **Pre-order Traversal**
  * **6-binary_tree_preorder.c:** This C function traverses a binary tree using pre-order traversal.

* **In-order Traversal**
  * **7-binary_tree_inorder.c:** This C function traverses a binary tree using in-order traversal.

* **Post-order Traversal**
  * **8-binary_tree_postorder.c:** This C function traverses a binary tree using post-order traversal.

* **Height**
  * **9-binary_tree_height.c:** This C function returns the height of a binary tree.

* **Depth**
  * **10-binary_tree_depth.c:** This C function returns the depth of a given node in a binary tree.

* **Size**
  * **11-binary_tree_size.c:** This C function returns the size of a binary tree.

* **Leaves**
  * **12-binary_tree_leaves.c:** This C function returns the number of leaves in a binary tree.

* **Nodes**
  * **13-binary_tree_nodes.c:** This C function returns the number of nodes in a binary tree with at least one child.

* **Balance Factor**
  * **14-binary_tree_balance.c:** This C function returns the balance factor of a binary tree.

* **Is Full**
  * **15-binary_tree_is_full.c:** This C function checks if a binary tree is full. If the tree is full, the function returns 1; otherwise, it returns 0.

* **Is Perfect**
  * **16-binary_tree_is_perfect.c:** This C function checks if a binary tree is perfect. If the tree is perfect, the function returns 1; otherwise, it returns 0.

* **Sibling**
  * **17-binary_tree_sibling.c:** This C function returns a pointer to the sibling of a given node in a binary tree. If no sibling is found, it returns NULL.

* **Uncle**
  * **18-binary_tree_uncle.c:** This C function returns a pointer to the uncle of a given node in a binary tree. If no uncle is found, it returns NULL.

## Authors
--- 

![GitHub Contributors Image](https://contrib.rocks/image?repo=RM92023/holbertonschool-low_level_programming)
Robinson Muñetón Jaramillo - <a href="https://github.com/RM92023" target="_blank"> @RM92023</a> ![Your Repository's Stats](https://github-readme-stats.vercel.app/api?username=RM92023&show_icons=true)
