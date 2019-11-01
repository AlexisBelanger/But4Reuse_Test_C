#include <stdio.h>
#include "point.c"
#include <time.h>
#include <stdlib.h>



point* create_point_list(int number_of_points){
    srand(time(NULL));   // Initialization, should only be called once.



    point* point_list;
    point_list = (point*)malloc(sizeof(point*)*number_of_points+1);
    int i;
    for(i=0; i<number_of_points; i++){
        int rx = rand()%100;
        int ry = rand()%100;
        point p;
        p.x = rx;
        p.y = ry;
        point_list[i] = p;
    }
    return point_list;
}

void print_point(point p){
    printf("(%d, %d)\n", p.x, p.y);
}



int main() {
    int i;
    int number_of_points = 10;
    point* point_list = create_point_list(number_of_points);
    printf("Point list : \n");
    for(i=0; i< number_of_points; i++){
        print_point(point_list[i]);
    }

    return 0;
}