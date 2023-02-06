cmake_minimum_required(VERSION 3.24)
project(dynamic-library-2 C)

# set the project name and specify the language
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--export-all-symbols")

# add the dynamic library my_library.dll
add_library(lib_b SHARED lib_b.c)

# Set the DLL name for the dynamic library
set_target_properties(lib_b PROPERTIES PREFIX "" OUTPUT_NAME "lib_b")

# add the executable file for the example
add_executable(prog_a prog_a.c)

# link the dynamic library my_library.dll to the executable file
target_link_libraries(prog_a lib_b)