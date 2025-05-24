#include <stdio.h>
#include <stdlib.h>
#include "stringstruct.h"


string constructor(int capacity) {
    string container;
    container.length = 0;
    container.capacity = capacity;
    container.body = malloc(sizeof(char) * capacity); //reserving memory
    container.body[0] = '\0';
    return container;
}

void destructor(string *target) {
    free(target->body);
    target->length = 0;
    target->capacity = 0;
}

void add_character(string *target, char input) {
    if (target->length + 1 >= target->capacity) {
        expand_memory(target, 2);
    }

    target->body[target->length] = input;
    target->length += 1;
    target->body[target->length] = '\0';
}

void add_characters(string *target, char* input) {
    int length = 0; //the length does NOT include the null character
    while (input[length] != '\0') {
        length++;
    }
    for (int y = 0; y < length; y++) {
        add_character(target, input[y]);
    }
}

void expand_memory(string *target, int capacity_multiplier) {
    target->capacity *= capacity_multiplier;
    char* temp = malloc(sizeof(char) * target->capacity);
    for (int x = 0; x < target->length + 1; x++) {
        temp[x] = target->body[x];
    }

    free(target->body);
    target->body = temp;
}

int compare_words(string *word1, string *word2) {
    if (word1->length != word2->length) {
        return 0;
    }
    else {
        for (int i = 0; i < word1->length; i++) {
            if (word1->body[i] != word2->body[i]) {
                return 0;
            }
        }
        return 1;
    }
}

