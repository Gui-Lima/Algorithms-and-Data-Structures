cmake_minimum_required(VERSION 3.9)
project(Algorithms_and_Data_Structures)

set(CMAKE_CXX_STANDARD 11)

add_executable(Algorithms_and_Data_Structures
        Data-Structures/Tree/NormalBinary/binaryTree.cpp
        Data-Structures/Tree/NormalBinary/binaryTree.h
        main.cpp
        Data-Structures/Tree/AVL/avlTree.cpp
        Data-Structures/Tree/AVL/avlTree.h
        Data-Structures/Lista/lista.cpp
        Data-Structures/Lista/lista.h
        Data-Structures/Heap/minHeap.cpp
        Data-Structures/Heap/minHeap.h
        Data-Structures/Hash/hashing.cpp
        Data-Structures/Hash/hashing.h
        Sorting-Algorithms/QuickSort/quicksort.cpp
        Sorting-Algorithms/QuickSort/quicksort.h
        Sorting-Algorithms/MergeSort/mergeSort.cpp
        Sorting-Algorithms/MergeSort/mergeSort.h
        Catch2/single_include/catch.hpp
        Catch2/tests.cpp
        Data-Structures/Graph/Non-Weight-Graph/graph.cpp
        Data-Structures/Graph/Non-Weight-Graph/graph.h
        Data-Structures/Graph/Weighted-Graph/wGraph.cpp
        Data-Structures/Graph/Weighted-Graph/wGraph.h
        Data-Structures/DisjointSet/disjointSet.cpp
        Data-Structures/DisjointSet/disjointSet.h
        Greedy-Algorithms/Minimum-Spamming-Tree/Kruskal/kruskal.cpp
        Greedy-Algorithms/Minimum-Spamming-Tree/Kruskal/kruskal.h
        Data-Structures/Heap/Modified/minHeapStructure.cpp
        Data-Structures/Heap/Modified/minHeapStructure.h
        Dynamic-Programming/KnapSack/knapsack.cpp
        Dynamic-Programming/KnapSack/knapsack.h
        utility.cpp
        utility.h
        Dynamic-Programming/Coin-Change/coinChange.cpp
        Dynamic-Programming/Coin-Change/coinChange.h
        Dynamic-Programming/Longest-Common-Subsequence/longestCommonSubsequence.cpp
        Dynamic-Programming/Longest-Common-Subsequence/longestCommonSubsequence.h
        Backtrack/NQueen/nQueens.cpp
        Backtrack/NQueen/nQueens.h
        Backtrack/5-digit-division/division.cpp
        Backtrack/5-digit-division/division.h Greedy-Algorithms/Djkistra/Djikstra.cpp Greedy-Algorithms/Djkistra/Djikstra.h Greedy-Algorithms/Minimum-Spamming-Tree/Prim/prim.cpp Greedy-Algorithms/Minimum-Spamming-Tree/Prim/prim.h Dynamic-Programming/Subset-Sum/subsetSum.cpp Dynamic-Programming/Subset-Sum/subsetSum.h)
