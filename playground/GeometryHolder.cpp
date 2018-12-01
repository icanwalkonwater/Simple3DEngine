//
// Created by lucas on 01/12/18.
//

#include <stdio.h>
#include "GeometryHolder.h"

GeometryHolder::GeometryHolder(Segment *segments, Point3F *points) {
    this->segments = segments;
    this->points = points;
    printf("Geometry Holder constructor triggered with %d segments\n", static_cast<int>(sizeof segments));
}

Segment *GeometryHolder::getSegments() {
    return this->segments;
}

Point3F *GeometryHolder::getPoints() {
    return this->points;
}
