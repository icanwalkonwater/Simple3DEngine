//
// Created by lucas on 01/12/18.
//

#ifndef SIMPLE3DENGINE_GEOMETRYHOLDER_H
#define SIMPLE3DENGINE_GEOMETRYHOLDER_H


#include "../Utils.h"

class GeometryHolder {
public:
    Segment *getSegments();

    Point3F *getPoints();

protected:
    GeometryHolder(Segment *segments, Point3F *points);

private:
    Segment *segments;
    Point3F *points;
};


#endif //SIMPLE3DENGINE_GEOMETRYHOLDER_H
