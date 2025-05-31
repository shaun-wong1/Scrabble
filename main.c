#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stringstruct.h"
#include "linkedlist.h"
#include "letterbag.h"
//#include "raylib.h"




int main() {

    srand(time(NULL));
    printf("Hello World \n");
    FILE *dictionary_FILE;
    dictionary_FILE = fopen("dictionary.txt", "r");

    Node* head_node = malloc(sizeof(Node)); //DOESNT CONTAIN ANY WORD
    Node* end_node = NULL;

    char line_buff[16]; //stores the first 16 chars of the line

    fgets(line_buff, 16, dictionary_FILE);
    string line = constructor(16);
    add_characters(&line, line_buff);
    end_node = newNode(line);
    head_node->next = end_node;



    while(fgets(line_buff, 16, dictionary_FILE)) { 
        
        string line = constructor(16);
        add_characters(&line, line_buff);
        end_node->next = newNode(line);
        end_node = end_node->next;
        
        //printf(" %s \n", line.body);

    } //read the content of the first line and store it in line_buff

    //load th first line into the string struc and make sure it has valid capacity and length

    fclose(dictionary_FILE);
    /*
    //printloop
    end_node = head_node->next;
    Node* print_temp_node = NULL;
    while (end_node->next != NULL) {
        print_temp_node = end_node->next;
        printf("%s \n", end_node->word.body);
        end_node = print_temp_node;
    }
    printf("%s \n", end_node->word.body);
    */

    int *bag = init();
    int letter = random_pick();
    printf("%c \n", bag[letter]);

    end_node = head_node->next;
    Node* temp_node = NULL;
    while (end_node->next != NULL) { //loops through, first creating a new (temp) node to contain the next node
        temp_node = end_node->next;
        destructor(&(end_node->word)); //next frees the word/contents of the node
        free(end_node); //frees the node itself
        end_node = temp_node;//loops back

    }

    destructor(&(end_node->word));// catches the case where the final node exsits but not being processed
    free(end_node);
    free(head_node);// above since while loop checks for the next node
    //so this is a catch for the very last node

    

    //print out the dictionary
    //free dictionary memory
    //1. free the words at each time
    //2. move the next of the node to some other place
    //3. free the memory needed for the newNodes
    //4. free the next of the node

}