#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "stringstruct.h"
#include "letterbag.h"



//random pick
//track how many tiles are in the bag
//return tiles to the bag (swap) and then random pick
int bag_size = 100;
int *bag;
int* init() {
    
    bag = malloc(100*sizeof(char));
    int quantity[] = {9, 2, 2, 4, 12, 2, 3, 2, 9, 1, 1, 4, 2, 6, 8, 2, 1, 6, 4, 6, 4, 2, 2, 1, 2, 1};
    

    for (int i = 0; i < 26; i++) {  //65 is ascii for 'A' and 90 is ascii for 'Z'
        add_chars(i + 65, quantity[i - 1]);
    }

    return bag;
}

void add_chars(char ascii_number, int quantity) {
    for (int i = 0; i < quantity; i++) {
        bag[i] = ascii_number;
    }
}

void remove_character(int index) {
    for (int i = index; i < bag_size; i++) {
        bag[i] = bag[i + 1];
    }
    bag_size -= 1;
}

int random_pick() {
    int random_number = rand() % bag_size;
    remove_character(random_number);
    return random_number;
}