0x1D. C - Binary trees

0. New node
Write a function that creates a binary tree node
When created, a node does not have any child
Your function must return a pointer to the new node, or NULL on failure

1. Insert left
Write a function that inserts a node as the left-child of another node
Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

2. Insert right
Write a function that inserts a node as the right-child of another node
Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node

3. Delete
Write a function that deletes an entire binary tree

4. Is leaf
Write a function that checks if a node is a leaf
if its a leaf then it has no children, node.left == nulland node.right == null

5. Is root
Write a function that checks if a given node is a root
if its a root then it has no parent ie, parent == null

6. Pre-order traversal
Write a function that goes through a binary tree using pre-order traversal
The value in the node must be passed as a parameter to this function.
If tree or func is NULL, do nothing


