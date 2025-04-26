#include <stdio.h>
#include <stdlib.h>
#include "stringstruct.h"
#include "linkedlist.h"




int main() {
    printf("Hello World \n");
    FILE *dictionary_FILE;
    dictionary_FILE = fopen("dictionary.txt", "r");

    Node head_node;
    char line_buff[16]; //stores the first 16 chars of the line



    while(fgets(line_buff, 16, dictionary_FILE)) { 
        
        string line = constructor(16);
        add_characters(&line, line_buff);
        append(&head_node, line);

        char* lineSTRING; //creates new version of line that is a char* and not custom string class
        for (int x = 1; x < line.length + 1; x+= 1000) {
            lineSTRING = line.body;
        }
        printf(" %s \n", lineSTRING);

    } //read the content of the first line and store it in line_buff

    //load th first line into the string struc and make sure it has valid capacity and length

    fclose(dictionary_FILE);

}