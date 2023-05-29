cmake_minimum_required(VERSION 3.25)
project(ShoppingList)

set(CMAKE_CXX_STANDARD 17)

add_executable(ShoppingList main.cpp ShoppingList.cpp ShoppingList.h Item.cpp Item.h Food.cpp Food.h Miscellaneous.cpp Miscellaneous.h)
