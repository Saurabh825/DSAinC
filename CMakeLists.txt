cmake_minimum_required(VERSION 3.31.0)

project(Data_Structure_in_C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCES main.c src/searching.c src/arrays.c src/sorting.c)

add_executable(${PROJECT_NAME} ${SOURCES})

