#include <bits/stdc++.h>
using namespace std;
/**
 * Namespaces: std
 * Libraries: <cstdlib>
 */
 
struct Node {
    char key;
    int count;
    Node *next, *child;
    Node(char key) : key(key), count(0), next(NULL), child(NULL) {}
};
 
/**
 * Complexity: O(|key| * k)
 */
Node *trie_find(Node *root, char *key) {
    Node *node, *list;
    for (list = root; *key != 0; key++) {
        for (node = list; node != NULL; node = node->next)
            if (node->key == *key)
                break;
        if (node != NULL)
            list = node->child;
        else
            return NULL;
    }
    return (node->count > 0) ? node : NULL;
}
 
/**
 * Complexity: O(|key| * k)
 */
void trie_insert(Node *(&root), char *key) {
    Node *node, *list, *parent = NULL;
    for (list = root; *key != 0; key++) {
        for (node = list; node != NULL; node = node->next)
            if (node->key == *key)
                break;
        if (node != NULL)
            list = node->child;
        else {
            node = new Node(*key);
            node->next = list;
            if (parent != NULL)
                parent->child = node;
            else
                root = node;
            list = NULL;
        }
        parent = node;
    }
    node->count++;
}
 
/**
 * Complexity: O(|key| * k)
 */
void trie_erase(Node *root, char *key) {
    Node *node, *list;
    for (list = root; *key != 0; key++) {
        for (node = list; node != NULL; node = node->next)
            if (node->key == *key)
                break;
        if (node != NULL)
            list = node->child;
        else
            return;
    }
    if (node->count > 0)
        node->count--;
}