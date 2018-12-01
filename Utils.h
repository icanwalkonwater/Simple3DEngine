//
// Created by lucas on 01/12/18.
//

#ifndef SIMPLE3DENGINE_UTILS_H
#define SIMPLE3DENGINE_UTILS_H

struct Viewport {
    int width;
    int height;
};

struct Point3 {
    int x = 0;
    int y = 0;
    int z = 0;
};

struct Point3F {
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
};

struct Pair {
    int *left;
    int *right;
};

struct Segment {
    Point3F *left;
    Point3F *right;
};

#endif //SIMPLE3DENGINE_UTILS_H
