#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "stringstruct.h"
//load ascii


//random pick
//track how many tiles are in the bag
//return tiles to the bag (swap) and then random pick

void init() {
    int *bag = malloc(100*sizeof(char));
    add_chars(97, 9, &bag);
    add_chars(98, 2, &bag);
    add_chars(99, 2, &bag);
    add_chars(100, 4, &bag);
    add_chars(101, 12, &bag);
    add_chars(102, 2, &bag);
    add_chars(103, 3, &bag);
    add_chars(104, 2, &bag);
    add_chars(105, 9, &bag);
    add_chars(106, 1, &bag);
    add_chars(107, 1, &bag);
    add_chars(108, 4, &bag);
    add_chars(109, 2, &bag);
    add_chars(110, 6, &bag);
    add_chars(110, 6, &bag);
}

void add_chars(char ascii_number, int quantity, int *bag) {
    for (int i = 0; i < quantity; i++) {
        bag[i] = ascii_number;
    }
}

char random_pick(bag) {

}