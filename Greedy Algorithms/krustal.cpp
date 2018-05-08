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
    e = quickSortDiferenciado(0, g.getNVert()-1, e);


}

wGraph::edge *krustal::quickSortDiferenciado(long initial, long final, wGraph::edge *arr) {
    if(initial >= final){
        return arr;
    }

   wGraph::edge pivot = arr[final];
    long i=initial-1;
    for(long j =initial;j<final;j++){
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

long krustal::mst() {
    long n = g.getSize()-1;
    auto result = new wGraph(g.getSize(), g.getNVert());
    long ecount = 0;
    while(n!=0){
        wGraph::edge a = e[ecount];
        long t1 = a.src;
        long t2 = a.dest;
        long t3 = a.weight;
        long x = d.find(t1)->data;
        long y = d.find(t2)->data;
        if(x !=y ){
            result->addNode(t1, t2, t3);
            d.uniao(t1, t2);
            n--;
        }
        ecount++;
    }
    return result->soma();
    //result->print();
}
