//
// Created by lucas on 01/12/18.
//

#ifndef SIMPLE3DENGINE_GEOMETRYHOLDER_H
#define SIMPLE3DENGINE_GEOMETRYHOLDER_H


#include "../Utils.h"

class GeometryHolder {
public:
    Segment* getSegments();
    PointF* getPoints();

protected:
    GeometryHolder(Segment* segments, PointF* points);

private:
    Segment *segments;
    PointF *points;
};


#endif //SIMPLE3DENGINE_GEOMETRYHOLDER_H
