cmake_minimum_required(VERSION 2.8)
project(namegen C)

add_executable(namegen c_array.h c_array.c namegen.h namegen.c main.c)