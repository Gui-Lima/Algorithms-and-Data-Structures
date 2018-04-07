cmake_minimum_required(VERSION 3.9)
project(Algorithms_and_Data_Structures)

set(CMAKE_CXX_STANDARD 11)

add_executable(Algorithms_and_Data_Structures
        binaryTree.cpp
        binaryTree.h
        lista.cpp
        lista.h
        main.cpp
        avlTree.cpp
        avlTree.h minHeap.cpp minHeap.h hashing.cpp hashing.h quicksort.cpp quicksort.h)
