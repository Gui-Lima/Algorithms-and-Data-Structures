//
// Created by guila on 01/05/18.
//

#include "krustal.h"

krustal::krustal(wGraph gk) {
    //creating disjoint set
    g = gk;
    for(int i = 0;i<g.getSize();i++){
        d.makeSet(i);
    }

    //creating graph
    e = g.getEdges();
    e = quickSortDiferenciado(0, 13, e);


}

wGraph::edge *krustal::quickSortDiferenciado(int initial, int final, wGraph::edge *arr) {
    if(initial >= final){
        return arr;
    }

   wGraph::edge pivot = arr[final];
    int i=initial-1;
    for(int j =initial;j<final;j++){
        if(arr[j].weight < pivot.weight){
            i++;
            //swap(arr[i], arr[j]);
            wGraph::edge temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    //swap(arr[i+1], pivot);
    wGraph::edge temp = pivot;
    arr[final] = arr[i+1];
    arr[i+1] = temp;
    quickSortDiferenciado(initial, i, arr);
    quickSortDiferenciado(i+2, final, arr);
    return arr;

}

void krustal::mst() {
    int n = g.getSize()-1;
    auto result = new wGraph(g.getSize());
    int ecount = 0;
    while(n!=0){
        wGraph::edge a = e[ecount];
        long x = d.find(a.dest)->data;
        long y = d.find(a.src)->data;
        //form cycle i guess
        if(x !=y ){
            result->addNode(a.src, a.dest, a.weight);
            ecount++;
            d.uniao(a.src, a.dest);
            n--;
        }
        else{
            ecount++;
        }
    }
    result->print();
}
