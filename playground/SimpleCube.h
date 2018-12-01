//
// Created by lucas on 01/12/18.
//

#ifndef HOLY3DENGINE_SIMPLECUBE_H
#define HOLY3DENGINE_SIMPLECUBE_H


#include "../Utils.h"
#include "GeometryHolder.h"

class SimpleCube : public GeometryHolder {
public:
    SimpleCube(Point3F &origin, double width, double height, double depth);

private:
    // size: 12
    Segment *buildSegments(Point3F &origin, double width, double height, double depth);
};


#endif //HOLY3DENGINE_SIMPLECUBE_H
