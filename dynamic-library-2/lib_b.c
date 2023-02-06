//
// Created by nilsg on 05.02.2023.
//
#include <stdio.h>
#include "game.h"

game_import_t *gimp;
//game_import_t newgameimport;

void initialize_lib_b() {
    gimp = &newgameimport;
    // access fields in the structure
    int some_field = gimp->some_field;
    //int some_field = newgameimport.some_field;

    printf("Result from function: %d\n", some_field);
}