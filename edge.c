//
// Created by Rouxcarnage on 02/11/2019.
//

#include "edge.h"
#include "point.h"
#include <stdio.h>



edge create_edge(point p1, point p2){
    edge e;
    e.p1=p1;
    e.p2=p2;
    return e;
}

void print_graph(edge* graph, int size){
    int i;
    for(i=0; i<size; i++){
        printf("[(%d,%d) - (%d,%d)]\n", graph[i].p1.x, graph[i].p1.y, graph[i].p2.x, graph[i].p2.y);
    }

}




