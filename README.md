# 0x1D. C - Binary trees

## Authors 
* Esther Wagatwe
* Kelvin Mukaria



## Resources

**Read or watch**:

-   [Binary tree](https://alx-intranet.hbtn.io/rltoken/1F2x42-8vUbOmU4L1C1KMg "Binary tree") (*note the first line: `Not to be confused with B-tree.`*)
-   [Data Structure and Algorithms - Tree](https://alx-intranet.hbtn.io/rltoken/QmcTMCkQyrgMjrqoWxYdhw "Data Structure and Algorithms - Tree")
-   [Tree Traversal](https://alx-intranet.hbtn.io/rltoken/nMxoYQdZR_guroan8JeqBQ "Tree Traversal")
-   [Binary Search Tree](https://alx-intranet.hbtn.io/rltoken/qO5dBlMnYJzbaWG3xVpcnQ "Binary Search Tree")
-   [Data structures: Binary Tree](https://alx-intranet.hbtn.io/rltoken/BeyJ2gjlE7_djwRiDyeHig "Data structures: Binary Tree")

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/rDjGcLNoVZsZG1Br0UbX6A "explain to anyone"), **without the help of Google**:

### General

-   What is a binary tree
-   What is the difference between a binary tree and a Binary Search Tree
-   What is the possible gain in terms of time complexity compared to linked lists
-   What are the depth, the height, the size of a binary tree
-   What are the different traversal methods to go through a binary tree
-   What is a complete, a full, a perfect, a balanced binary tree

### GitHub

**There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.**

## More Info

### Data structures

Please use the following data structures and types for binary trees. Don't forget to include them in your header file.

#### Basic Binary Tree

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

```

#### Binary Search Tree

```
typedef struct binary_tree_s bst_t;

```

#### AVL Tree

```
typedef struct binary_tree_s avl_t;

```

#### Max Binary Heap

```
typedef struct binary_tree_s heap_t;

```

### Print function

To match the examples in the tasks, you are given [this function](https://github.com/holbertonschool/0x1C.c "this function")

## Mandatory Tasks

### [0. New node](./0-binary_tree_node.c)

Write a function that creates a binary tree node

-   Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
-   Where `parent` is a pointer to the parent node of the node to create
-   And `value` is the value to put in the new node
-   When created, a node does not have any child
-   Your function must return a pointer to the new node, or `NULL` on failure

### [1. Insert left](./1-binary_tree_insert_left.c)

Write a function that inserts a node as the left-child of another node

-   Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
-   Where `parent` is a pointer to the node to insert the left-child in
-   And `value` is the value to store in the new node
-   Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
-   If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

### [2. Insert right](./2-binary_tree_insert_right.c)

Write a function that inserts a node as the right-child of another node

-   Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
-   Where `parent` is a pointer to the node to insert the right-child in
-   And `value` is the value to store in the new node
-   Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
-   If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

### [3. Delete](./3-binary_tree_delete.c)

Write a function that deletes an entire binary tree

-   Prototype: `void binary_tree_delete(binary_tree_t *tree);`
-   Where `tree` is a pointer to the root node of the tree to delete
-   If `tree` is `NULL`, do nothing

### [4. Is leaf](./4-binary_tree_is_leaf.c)

Write a function that checks if a node is a leaf

-   Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
-   Where `node` is a pointer to the node to check
-   Your function must return `1` if `node` is a leaf, otherwise `0`
-   If `node` is `NULL`, return `0`

### [5. Is root](./5-binary_tree_is_root.c)

Write a function that checks if a given node is a root

-   Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
-   Where `node` is a pointer to the node to check
-   Your function must return `1` if `node` is a root, otherwise `0`
-   If `node` is `NULL`, return `0`

### [6. Pre-order traversal](./6-binary_tree_preorder.c)

-   Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
-   Where `tree` is a pointer to the root node of the tree to traverse
-   And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
-   If `tree` or `func` is `NULL`, do nothing

### [7. In-order traversal](./7-binary_tree_inorder.c)

Write a function that goes through a binary tree using in-order traversal

-   Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
-   Where `tree` is a pointer to the root node of the tree to traverse
-   And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
-   If `tree` or `func` is `NULL`, do nothing

### [8. Post-order traversal](./8-binary_tree_postorder.c)

Write a function that goes through a binary tree using post-order traversal

-   Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
-   Where `tree` is a pointer to the root node of the tree to traverse
-   And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
-   If `tree` or `func` is `NULL`, do nothing

### [9. Height](./9-binary_tree_height.c)

Write a function that measures the height of a binary tree

-   Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`
-   Where `tree` is a pointer to the root node of the tree to measure the height.
-   If `tree` is `NULL`, your function must return `0`

### [10. Depth](./10-binary_tree_depth.c)

Write a function that measures the depth of a node in a binary tree

-   Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`
-   Where `tree` is a pointer to the node to measure the depth
-   If `tree` is `NULL`, your function must return `0`

### [11. Size](./11-binary_tree_size.c)

Write a function that measures the size of a binary tree

-   Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`
-   Where `tree` is a pointer to the root node of the tree to measure the size
-   If `tree` is `NULL`, the function must return 0

### [12. Leaves](./12-binary_tree_leaves.c)

Write a function that counts the leaves in a binary tree

-   Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`
-   Where `tree` is a pointer to the root node of the tree to count the number of leaves
-   If `tree` is `NULL`, the function must return 0
-   A `NULL` pointer is not a leaf

### [13. Nodes](./13-binary_tree_nodes.c)

Write a function that counts the nodes with at least 1 child in a binary tree

-   Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`
-   Where `tree` is a pointer to the root node of the tree to count the number of nodes
-   If `tree` is `NULL`, the function must return 0
-   A `NULL` pointer is not a node

### [14. Balance factor](./14-binary_tree_balance.c)

Write a function that measures the balance factor of a binary tree

-   Prototype: `int binary_tree_balance(const binary_tree_t *tree);`
-   Where `tree` is a pointer to the root node of the tree to measure the balance factor
-   If `tree` is `NULL`, return `0`

### [15. Is full](./15-binary_tree_is_full.c)

Write a function that checks if a binary tree is full

-   Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`
-   Where `tree` is a pointer to the root node of the tree to check
-   If `tree` is `NULL`, your function must return `0`

### [16. Is perfect](./16-binary_tree_is_perfect.c)

Write a function that checks if a binary tree is perfect

-   Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`
-   Where `tree` is a pointer to the root node of the tree to check
-   If `tree` is `NULL`, your function must return `0`

### [17. Sibling](./17-binary_tree_sibling.c)

Write a function that finds the sibling of a node

-   Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
-   Where `node` is a pointer to the node to find the sibling
-   Your function must return a pointer to the sibling node
-   If `node` is `NULL` or the parent is `NULL`, return `NULL`
-   If `node` has no sibling, return `NULL`

### [18. Uncle](./18-binary_tree_uncle.c)

Write a function that finds the uncle of a node

-   Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
-   Where `node` is a pointer to the node to find the uncle
-   Your function must return a pointer to the uncle node
-   If `node` is `NULL`, return `NULL`
-   If `node` has no uncle, return `NULL`
