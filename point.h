//
// Created by Rouxcarnage on 02/11/2019.
//

#ifndef BUT4REUSE_TEST_C_POINT_H
#define BUT4REUSE_TEST_C_POINT_H
typedef struct point point;
struct point {
    int name;
    int x;
    int y;
    char* color;
};

point* create_point_list(int number_of_points);
void print_point(point p);
float distance(point p1, point p2);
point setPointColor(point p, char* color);
#endif //BUT4REUSE_TEST_C_POINT_H
