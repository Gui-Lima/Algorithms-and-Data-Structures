//
// Created by guila on 12/04/18.
//

#include <list>
#include "vector"
#include "graph.h"
#include "iostream"
using namespace std;

graph::graph(int nNodes) {
    numberOfNodes = nNodes;
    g = new std::vector<int>[numberOfNodes];
}

void graph::addEdge(int i, int j) {
    if(i>numberOfNodes || j>numberOfNodes){

    }
    else{
        g[i].push_back(j);
        g[j].push_back(i);
    }
}

void graph::print() {
    for(int i =0;i<numberOfNodes;i++){
        if(!g[i].empty()){
            cout << "Vertex " << i << " is connected with: ";
            for(int j = 0;j<g[i].size();j++){
                cout << g[i][j] << " ";
            }
        }
        cout << endl;
    }
}

vector<int> graph::bfs(int startingNode) {
    vector<int> result;
    if(g[startingNode].empty()){
       exceptionNoConnection();
       return result;
    }

    bool* visited = new bool[numberOfNodes];
    for(int i = 0;i<numberOfNodes;i++){
        visited[i] = false;
    }

    visited[startingNode] = true;
    list<int> queue;
    queue.push_back(startingNode);

    while(!queue.empty()){
        int s = queue.front();
        result.push_back(s);
       // cout << s << endl;
        queue.pop_front();

        for(int i=0 ; i<g[s].size() ; i++){
            if(!visited[g[s][i]]){
                visited[g[s][i]] = true;
                queue.push_back(g[s][i]);
            }
        }

    }

}




void graph::dfs(int startingNode){
    bool* visited = new bool[numberOfNodes];
    for(int i = 0;i<numberOfNodes;i++){
        visited[i] = false;
    }

    dfsUtil(startingNode, visited);
}


void graph::dfsUtil(int startingNode, bool* visited){

    if(!visited[startingNode]){
        visited[startingNode] = true;
        cout << startingNode << endl;
    }

    if(noMoreAdjVisitors(startingNode, visited)){
        return;
    }

    for(int i = 0;i<g[startingNode].size();i++){
        dfsUtil(g[startingNode][i], visited);
    }
}

bool graph::noMoreAdjVisitors(int i, bool *visited){
    int nVisited = 0;
    for(int j = 0;j<g[i].size();j++){
        if(visited[g[i][j]]){
            nVisited++;
        }
    }

    if(nVisited == g[i].size()){
        return true;
    }
    else{
        return false;
    }

}

//Exceptions

void graph::exceptionNoConnection() {
    std::cout << "This node has no connections with anything";
    return;
}

int graph::size() {
    return numberOfNodes;
}

bool graph::isColorable(int nColors) {

    int* colors = new int[numberOfNodes];
    //all nodes starts not painted
    for(int i =0;i<numberOfNodes;i++){
        colors[i] = 0;
    }

    if(isColorableUtil(nColors, colors, 0) == false){
        std:: cout << "NOT BICOLORABLE." << std::endl;
        return false;
    }
    else{
        std::cout << "BICOLORABLE." << std::endl;
        return true;
    }
    return false;
}

bool graph::isColorableUtil(int nColors, int* colors, int currentNode) {


    if(currentNode == numberOfNodes){
        return true;
    }

    for(int i = 1; i <= nColors;i++){
        if(isSafe(i,colors,currentNode)){
            colors[currentNode] = i;
            if(isColorableUtil(nColors, colors, currentNode+1)== true){
                return true;
            }
            colors[currentNode] = 0;
        }
    }
return false;

}


bool graph::has(int i, int j) {
    for(int c = 0;c<g[i].size();c++){
        if(g[i][c] == j){
            return true;
        }
    }
    return false;
}



bool graph::isSafe(int currentColor, int *colors, int currentNode) {

    for(int i = 0;i<numberOfNodes;i++){
        if(has(currentNode, i) && currentColor == colors[i]){
            return false;
        }
    }
    return true;
}

void graph::reCreate(int n) {
        numberOfNodes = n;
        g = new std::vector<int>[numberOfNodes];
}


