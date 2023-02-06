//
// Created by nilsg on 05.02.2023.
// "In the above example, what could be the exemplary content of the header file game.h?"
//

#ifndef GAME_H
#define GAME_H

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

typedef struct game_import_s {
    /* data members specific to the game */
    int some_field;
} game_import_t;

extern game_import_t newgameimport;

#endif /* GAME_H */
