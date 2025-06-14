#include <stdio.h>
#include <stdlib.h>
#ifndef STRINGSTRUCT_H
#define STRINGSTRUCT_H

struct stringStruct{ //null charachter is not a character and IS NOT INCLUDED IN STRING LENGTH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    char* body;
    int length;
    int capacity;
};

typedef struct stringStruct string;

string constructor(int capacity);
void destructor(string *target);
void add_character(string *target, char input);
void add_characters(string *target, char* input);
void expand_memory(string *target, int capacity_multiplier);
int compare_words(string *word1, string *word2);

#endif