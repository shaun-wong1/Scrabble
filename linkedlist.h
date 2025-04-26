#include <stdio.h>
#include <stdlib.h>
#include "stringstruct.h"
//SHOULD INCLUDE STRINGSTRUCT.H DUE TO UNKNPOWN TYPE NAMES BUT CANNOT DUE TO REDFINITIONS



struct Nodestruct {
    string word;
    struct Nodestruct *next;
};

typedef struct Nodestruct Node;

Node* newNode(string value);
void append(Node *start_node, string word);
Node* find_end(Node *node);