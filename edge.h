//
// Created by Rouxcarnage on 02/11/2019.
//
#include "point.h"
#ifndef BUT4REUSE_TEST_C_EDGE_H
#define BUT4REUSE_TEST_C_EDGE_H
typedef struct edge edge;
struct edge {
    point p1;
    point p2;
};

edge create_edge(point p1, point p2);

void print_graph(edge* graph, int size);


#endif //BUT4REUSE_TEST_C_EDGE_H
