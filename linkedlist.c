#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "stringstruct.h"

Node* newNode(string value) {
    Node *output = malloc(sizeof(Node));
    output->word = value;
    output->next = NULL;
    return output;
};

void append(Node *start_node, string word) {
    Node* end_node = find_end(start_node);
    end_node->next = newNode(word);
}

Node* find_end(Node *node) {
    while (node->next != NULL) {
        node = node->next;
    }
    return node;
}

Node* find_node(Node *start_node, string word) {
    while (start_node->next != NULL) {
        int same = compare_words(&(start_node->word), &word); //either 0 or 1
        if (same == 1) {
            return start_node;
        }
        else {
            start_node = start_node->next;
        }
    }
}