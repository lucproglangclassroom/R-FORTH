cmake_minimum_required(VERSION 3.5)
project(Tokens C) # Define the project as a C language project
set(CMAKE_C_STANDARD 99) # Specify the C standard, e.g., C99

# Include directories, if you have any. For now, we assume all files are in the same directory.
# include_directories(include)

# Define the executable to be built from the specified source files
add_executable(tokens main.c token.c)

# If your project needs to link against libraries, specify them here. For example:
# target_link_libraries(tokens m)