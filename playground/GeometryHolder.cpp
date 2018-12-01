//
// Created by lucas on 01/12/18.
//

#include "GeometryHolder.h"

GeometryHolder::GeometryHolder(Segment *segments, PointF *points) {
    this->segments = segments;
    this->points = points;
}

Segment* GeometryHolder::getSegments() {
    return this->segments;
}

PointF* GeometryHolder::getPoints() {
    return this->points;
}
