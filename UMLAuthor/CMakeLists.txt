cmake_minimum_required(VERSION 3.25)
project(UMLVisitor)

set(CMAKE_CXX_STANDARD 17)

add_executable(UMLVisitor main.cpp Author.cpp Author.h Book.cpp Book.h Product.cpp Product.h Pen.cpp Pen.h Visitor.cpp Visitor.h PriceVisitor.cpp PriceVisitor.h DetailsVisitor.cpp DetailsVisitor.h)
