
#define CATCH_CONFIG_RUNNER
#include "single_include/catch.hpp"
#include "../Sorting-Algorithms/mergeSort.h"
#include "../Data-Structures/wGraph.h"
#include <iostream>
#include "fstream"
#include "string"



/*
 *  MERGESORT test cases
 *
 */

string openFile(const string &fileName){
    ifstream myReadFile;
    string output;
    myReadFile.open("dijkstraTests.txt");
    if (myReadFile.is_open()) {
        while (!myReadFile.eof()) {


            myReadFile >> output;
            cout<<output;


        }
    }
    myReadFile.close();
    return output;
}

TEST_CASE( "Elements are in right order", "[sort]" ) {
    int t1[] = {10 , 12 , 30 , 1 , 4 , 66 , 100, 20, 44, 9, 33, 50, 37,75};
    mergeSort m(t1, 14);
    int r1[] = {1, 4, 9, 10, 12,20,30,33,37,44,50,66,75,100};
    m.sort();
    for(int i = 0;i<14;i++){
        REQUIRE(m.rArr()[i] == r1[i]);
    }
}

TEST_CASE( "Does not break with exceptional conditions", "[sort]"){
    int t2[] = {};
    mergeSort m1(t2, 0);
    m1.sort();
    REQUIRE(m1.rArr());

    int t3[] = {-10, -5, 3, 0};
    mergeSort m2(t3, 4);
    m2.sort();
    int r3[] = {-10, -5, 0, 3};
    for(int i = 0;i<4;i++){
        REQUIRE(m2.rArr()[i] == r3[i]);
    }

    int t4[] = {1, 1, 1 ,1};
    mergeSort m3(t4, 4);
    m3.sort();
    int r4[] = {1, 1, 1, 1};
    for(int i = 0;i<4;i++){
        REQUIRE(m3.rArr()[i] == r4[i]);
    }
}


/*
 *
 * Graph tests cases
 *
 */

TEST_CASE("Printing in bfs", "[bfs]"){

}

TEST_CASE("Djikstra", "[djkistra]"){
    string result = openFile("dijkstraTests.txt");
}