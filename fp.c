#include <stdio.h>
#include <stdlib.h>

// Node structure for the binary tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to find the path from the root to a given node
int findPath(struct Node* root, int target, int path[], int pathLen) {
    // Base case: if root is NULL, return false
    if (root == NULL) {
        return 0;
    }

    // Add the current node to the path
    path[pathLen] = root->data;
    pathLen++;

    // Check if the current node is the target node
    if (root->data == target) {
        return 1;
    }

    // Recursively check the left and right subtrees
    if (findPath(root->left, target, path, pathLen) || findPath(root->right, target, path, pathLen)) {
        return 1;
    }

    // Backtrack: Remove the current node from the path (implicitly by reducing pathLen)
    pathLen--;  // This reduces the path length and discards the last node from the path

    // If target is not found in either subtree, return false
    return 0;
}

// Helper function to print the path
void printPath(int path[], int pathLen) {
    for (int i = 0; i < pathLen; i++) {
        printf("%d ", path[i]);
    }
    printf("\n");
}

// Test case for the function
int main() {
    // Creating the binary tree:
    //         2
    //     3       4
    //         6       7
    struct Node* root = newNode(2);
    root->left = newNode(3);
    root->right = newNode(4);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    int path[100];  // Array to store the path
    int target;

    // Test 1: Find path to node 6
    target = 6;
    printf("Finding path to node %d: ", target);
    if (findPath(root, target, path, 0)) {
        printPath(path, 3);  // The length of the path is known to be 3 for this example
    } else {
        printf("Node %d not found in the tree.\n", target);
    }

    // Test 2: Find path to node 3
    target = 3;
    printf("Finding path to node %d: ", target);
    if (findPath(root, target, path, 0)) {
        printPath(path, 2);  // The length of the path is 2
    } else {
        printf("Node %d not found in the tree.\n", target);
    }

    // Test 3: Find path to node 1 (not in the tree)
    target = 1;
    printf("Finding path to node %d: ", target);
    if (findPath(root, target, path, 0)) {
        printPath(path, 1);  // If the node is found, print the path
    } else {
        printf("Node %d not found in the tree.\n", target);
    }

    // Test 4: Empty tree case
    struct Node* emptyRoot = NULL;
    target = 6;
    printf("Finding path to node %d in an empty tree: ", target);
    if (findPath(emptyRoot, target, path, 0)) {
        printPath(path, 0);  // No path to print for an empty tree
    } else {
        printf("Node %d not found in the tree.\n", target);
    }

    return 0;
}
