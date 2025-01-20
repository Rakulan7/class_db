#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "btree.h"

Node* create_node(Row data) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (!node) {
        perror("Failed to allocate memory for node");
        exit(EXIT_FAILURE);
    }
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insert(Node* root, Row data) {
    if (root == NULL) {
        return create_node(data);
    }
    if (data.id < root->data.id) {
        root->left = insert(root->left, data);
    } else if (data.id > root->data.id) {
        root->right = insert(root->right, data);
    }
    return root;
}
