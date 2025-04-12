#include <stdio.h>
#include <stdlib.h>
#include "stringstruct.h"

typedef struct node {
    string word;
    struct node *next;
};



int main() {
    printf("Hello World \n");
    FILE *dictionary_FILE;
    dictionary_FILE = fopen("dictionary.txt", "r");

    
    struct node *head;

    char line_buff[16];

    string line = constructor(16);
    add_characters(line, line_buff);


    fgets(line_buff, 16, dictionary_FILE);

    //load th first line into the string struc and make sure it has valid capacity and length

    printf("%s\n", line);
    fclose(dictionary_FILE);

}