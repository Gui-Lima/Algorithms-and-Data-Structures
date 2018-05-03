cmake_minimum_required(VERSION 3.9)
project(Algorithms_and_Data_Structures)

set(CMAKE_CXX_STANDARD 11)

add_executable(Algorithms_and_Data_Structures
        Data-Structures/binaryTree.cpp
        Data-Structures/binaryTree.h
        Data-Structures/lista.cpp
        Data-Structures/lista.h
        main.cpp
        Data-Structures/avlTree.cpp
        Data-Structures/avlTree.h
        Data-Structures/minHeap.cpp
        Data-Structures/minHeap.h
        Data-Structures/hashing.cpp
        Data-Structures/hashing.h
        Sorting-Algorithms/quicksort.cpp
        Sorting-Algorithms/quicksort.h
        Sorting-Algorithms/mergeSort.cpp
        Sorting-Algorithms/mergeSort.h
        Catch2/single_include/catch.hpp
        Catch2/tests.cpp
        Data-Structures/graph.cpp
        Data-Structures/graph.h
        Data-Structures/wGraph.cpp
        Data-Structures/wGraph.h
        Data-Structures/disjointSet.cpp
        Data-Structures/disjointSet.h "Greedy Algorithms/krustal.cpp" "Greedy Algorithms/krustal.h" Data-Structures/minHeapStructure.cpp Data-Structures/minHeapStructure.h)
