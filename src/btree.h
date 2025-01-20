#ifndef BTREE_H
#define BTREE_H

typedef struct {
    int id;
    char name[32];
    char email[255];
} Row;

typedef struct Node {
    Row data;
    struct Node* left;
    struct Node* right;
} Node;

Node* create_node(Row data);
Node* insert(Node* root, Row data);
void in_order_traversal(Node* root);
void free_tree(Node* root);

#endif