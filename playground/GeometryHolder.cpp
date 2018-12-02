//
// Created by lucas on 01/12/18.
//

#include "GeometryHolder.h"

GeometryHolder::GeometryHolder(std::vector<Segment> const &segments, std::vector<Point3F> const &points) {
    this->segments = segments;
    this->points = points;
}

std::vector<Segment> GeometryHolder::getSegments() {
    return this->segments;
}

std::vector<Point3F> GeometryHolder::getPoints() {
    return this->points;
}
