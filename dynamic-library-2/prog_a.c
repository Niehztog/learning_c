//
// Created by nilsg on 05.02.2023.
//
// "A C program called "ProgA" loads a dynamically linked library called "LibB". ProgA then defines a structure like this:
// extern game_import_t newgameimport;
// How could LibB access that structure?"
//
#include <stdio.h>
#include <windows.h>
#include "game.h"

// definition of the game_import_t structure
game_import_t newgameimport = {
    .some_field = 42
};
#pragma comment(linker, "/EXPORT:newgameimport=newgameimport")

int main()
{
    HINSTANCE hinstLib;
    typedef void (*FunctionPointer)();

    newgameimport.some_field = 42;

    hinstLib = LoadLibrary("lib_b.dll");
    if (hinstLib != NULL)
    {
        FunctionPointer initialize_lib_b;
        initialize_lib_b = (FunctionPointer)GetProcAddress(hinstLib, "initialize_lib_b");

        if (initialize_lib_b != NULL)
        {
            initialize_lib_b();
        }

        FreeLibrary(hinstLib);
    }

    return 0;
}