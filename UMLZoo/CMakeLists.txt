cmake_minimum_required(VERSION 3.25)
project(UMLZoo)

set(CMAKE_CXX_STANDARD 17)

add_executable(UMLZoo main.cpp Zoo.cpp Zoo.h Animal.cpp Animal.h Feline.cpp Feline.h Cow.cpp Cow.h Eagle.cpp Eagle.h Shark.cpp Shark.h Lion.cpp Lion.h Tiger.cpp Tiger.h)
