// main.c file from ChatGPT demonstrating the loading of a dynamic library
// "Write exemplary C code which opens a dynamic library and executes a function from it using the Windows API."

#include <stdio.h>
#include <windows.h>

int load_lib();
typedef int (*FunctionPointer)(int, int);

int main() {
    printf("Hello, World!\n");
    int result = load_lib();
    return result;
}

int load_lib() {
    HINSTANCE hinstLib;
    FunctionPointer func;
    BOOL fFreeResult;

    // Load the dynamic library
    hinstLib = LoadLibrary("library.dll");
    if (hinstLib == NULL) {
        printf("Could not load the library\n");
        return 1;
    }

    // Get the function from the library
    func = (FunctionPointer)GetProcAddress(hinstLib, "some_function");
    if (func == NULL) {
        printf("Could not find the function\n");
        return 1;
    }

    // Call the function from the library
    int result = func(3, 5);
    printf("Result from function: %d\n", result);

    // Free the dynamic library
    fFreeResult = FreeLibrary(hinstLib);
    if (!fFreeResult) {
        printf("Could not free the library\n");
        return 1;
    }

    return 0;
}