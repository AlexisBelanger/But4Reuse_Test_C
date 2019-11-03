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

float edge_length(edge e){
    return distance(e.p1, e.p2);
}

int is_neighbour(point p1, point p2, edge* graph, int graph_size){
    int i;
    for(i=0; i<graph_size; i++){
        if(p1.x==graph[i].p1.x && p1.y==graph[i].p1.y && p2.x==graph[i].p2.x && p2.y==graph[i].p2.y ){
            return 1;
        }else {
            if (p2.x == graph[i].p1.x && p2.y == graph[i].p1.y && p1.x == graph[i].p2.x && p1.y == graph[i].p2.y) {
                return 1;
            }
        }
    }
    return 0;
}




