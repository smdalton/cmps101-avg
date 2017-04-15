cmake_minimum_required(VERSION 3.6)
project(IntVec)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES graph01.c intVec.c intVec.h)
add_executable(IntVec ${SOURCE_FILES} intVec.h)