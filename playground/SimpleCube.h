//
// Created by lucas on 01/12/18.
//

#ifndef HOLY3DENGINE_SIMPLECUBE_H
#define HOLY3DENGINE_SIMPLECUBE_H


#include "../Utils.h"
#include "GeometryHolder.h"

class SimpleCube : public GeometryHolder {
public:
    SimpleCube(PointF *origin, double width, double height, double depth);
    SimpleCube(PointF *cornerDownLeftFront, PointF *cornerUpRightBack);

private:
    // size: 12
    Segment* buildSegments(PointF *origin, double width, double height, double depth);
};


#endif //HOLY3DENGINE_SIMPLECUBE_H
