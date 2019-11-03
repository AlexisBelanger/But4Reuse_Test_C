//
// Created by Rouxcarnage on 02/11/2019.
//
#include "main.h"
#include <stdio.h>
#include "point.h"
#include "edge.h"

#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"




int main() {
    int i;
    int number_of_points = 10;
    point* point_list = create_point_list(number_of_points);
    printf("Hello World");

    printf("Point list : \n");
    for(i=0; i< number_of_points; i++){
        print_point(point_list[i]);
    }

    point origin;
    origin.x = 0;
    origin.y = 0;
    origin.name = 0;

    printf("\n");
    for(i=0; i< number_of_points; i++){
        float dist = distance(point_list[i], origin);
        printf("Distance between Point %d and the origin : %0.2f \n", point_list[i].name, dist);
        if(dist<30){
            char* green = "green";
            setPointColor(point_list[i], green);
        }else{
            if(dist<60){
                char* yellow = "yellow";
                point_list[i] = setPointColor(point_list[i], yellow);
            }else{
                if(dist<90){
                    char* red = "red";
                    point_list[i] = setPointColor(point_list[i], red);
                }else{
                    char* black = "black";
                    point_list[i] = setPointColor(point_list[i], black);
                }
            }
        }
        printf("The point is now colored in %s\n", point_list[i].color);
    }

    edge* graph;
    graph = (edge*)malloc(sizeof(edge)*number_of_points);
    int j;
    printf("nik");
    for(j=1; j<number_of_points; j++){

        edge e;
        e = create_edge(point_list[0],point_list[j]);
        graph[j-1] = e;
    }
    print_graph(graph, number_of_points-1);



    return 0;
}