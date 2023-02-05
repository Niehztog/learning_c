# CMakeList.txt by ChatGPT
# "Write the file CMakeLists.txt for the above example, instruction the compiler to build the executable file for the example and the dynamic library my_library.dll."
# "In CMakeList.txt, how can I specify the name of the dll file of the dynamic library?"
# "In the above example, gcc will name the compiled library file "liblibrary.dll.dll" which differs from the specified name "my_library.dll". How can this be fixed?"

cmake_minimum_required(VERSION 3.24)
project(learning_c C)

# set the project name and specify the language
set(CMAKE_C_STANDARD 23)

# add the dynamic library my_library.dll
add_library(my_library SHARED library.c)

# Set the DLL name for the dynamic library
set_target_properties(my_library PROPERTIES PREFIX "" OUTPUT_NAME "library")

# add the executable file for the example
add_executable(learning_c main.c)

# link the dynamic library my_library.dll to the executable file
target_link_libraries(learning_c my_library)