cmake_minimum_required(VERSION 3.25)
project(UMLParcare)

set(CMAKE_CXX_STANDARD 17)

add_executable(UMLParcare main.cpp Parcare.cpp Parcare.h Masina.cpp Masina.h Dacia.cpp Dacia.h Toyota.cpp Toyota.h FerrariRosu.cpp FerrariRosu.h)
