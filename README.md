# 0x1D. C - Binary trees
## Learning Objectives
1. What is a binary tree?
2. What is the difference between a binary tree and a Binary Search Tree?
3. What is the possible gain in terms of time complexity compared to linked lists?
4. What are the depth, the height, the size of a binary tree?
5. What are the different traversal methods to go through a binary tree?
6. What is a complete, a full, a perfect, a balanced binary tree?

## Tasks
0. New node
Write a function “binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)” that creates a binary tree node where parent is a pointer to the parent node of the node to create and value is the value to put in the new node. When created, a node does not have any child. 
Requirement
* Your function must return a pointer to the new node, or NULL on failure.

1. Insert left
Write a function “binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);” that inserts a node as the left-child of another node where parent is a pointer to the node to insert the left-child in and value is the value to store in the new node. Your function must return a pointer to the created node, or NULL on failure or if parent is NULL. 
Requirement
* If a parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

2. Insert right
Write a function “binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)” that inserts a node as the right-child of another node where parent is a pointer to the node to insert the right-child in and value is the value to store in the new node. Your function must return a pointer to the created node, or NULL on failure or if parent is NULL. 
Requirement
* If a parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

3. Delete
Write a function “void binary_tree_delete(binary_tree_t *tree)” that deletes an entire binary tree where the tree is a pointer to the root node of the tree to delete. If the tree is NULL, do nothing.

4. Is leaf
Write a function “int binary_tree_is_leaf(const binary_tree_t *node)” that checks if a node is a leaf where node is a pointer to the node to check. Your function must return 1 if the node is a leaf, otherwise 0. If node is NULL, return 0.

5. Is root
Write a function “int binary_tree_is_root(const binary_tree_t *node)” that checks if a given node is a root where node is a pointer to the node to check. Your function must return 1 if node is a root, otherwise 0. If node is NULL, return 0.

6. Pre-order traversal
Write a function “void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))” that goes through a binary tree using preorder traversal where tree is a pointer to the root node of the tree to traverse and func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function. If a tree or func is NULL, do nothing.

7. In-order traversal
Write a function “void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))” that goes through a binary tree using inorder traversal where tree is a pointer to the root node of the tree to traverse and func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function. If tree or func is NULL, do nothing.

8. Post-order traversal
Write a function “void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))” that goes through a binary tree using postorder traversal where tree is a pointer to the root node of the tree to traverse and func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function. If tree or func is NULL, do nothing.

9. Height
Write a function “size_t binary_tree_height(const binary_tree_t *tree)” that measures the height of a binary tree where tree is a pointer to the root node of the tree to measure the height. If tree is NULL, your function must return 0.

10. Depth
Write a function “size_t binary_tree_depth(const binary_tree_t *tree)” that measures the depth of a node in a binary tree where tree is a pointer to the node to measure the depth if tree is NULL, your function must return 0.

11. Size
Write a function “size_t binary_tree_size(const binary_tree_t *tree)”  that measures the size of a binary tree where tree is a pointer to the root node of the tree to measure the size if the tree is NULL, the function must return 0.

12. Leaves
Write a function “size_t binary_tree_leaves(const binary_tree_t *tree)” that counts the leaves in a binary tree where tree is a pointer to the root node of the tree to count the number of leaves if tree is NULL, the function must return 0. A NULL pointer is not a leaf.

13. Nodes
Write a function “size_t binary_tree_nodes(const binary_tree_t *tree)” that counts the nodes with at least 1 child in a binary tree where tree is a pointer to the root node of the tree to count the number of nodes. If tree is NULL, the function must return 0. A NULL pointer is not a node.

14. Balance factor
Write a function “int binary_tree_balance(const binary_tree_t *tree)” that measures the balance factor of a binary tree where tree is a pointer to the root node of the tree to measure the balance factore. If tree is NULL, return 0.

15. Is full
Write a function “int binary_tree_is_full(const binary_tree_t *tree)” that checks if a binary tree is full where tree is a pointer to the root node of the tree to check. If tree is  NULL, your function must return 0.

16. Is perfect
Write a function “int binary_tree_is_perfect(const binary_tree_t *tree)” that checks if a binary tree is perfect where tree is a pointer to the root of the tree to check, if tree is NULL, your function must return 0.

17. Sibling
Write a function “binary_tree_t *binary_tree_sibling(binary_tree_t *node) ” that finds the sibling of a node where node is a pointer to the node to find the sibling. Your function must return a pointer to the sibling node. If node is NULL or the parent is NULL, return NULL. If node has no sibling, return NULL.

18. Uncle
Write a function “binary_tree_t *binary_tree_uncle(binary_tree_t *node)” that finds the uncle of a node where node is a pointer to the node to find the uncle. Your function must return a pointer to the uncle node. If node is NULL, return NULL. If node has no uncle, return NULL.

