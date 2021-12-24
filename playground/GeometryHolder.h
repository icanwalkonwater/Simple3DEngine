//
// Created by lucas on 01/12/18.
//

#ifndef SIMPLE3DENGINE_GEOMETRYHOLDER_H
#define SIMPLE3DENGINE_GEOMETRYHOLDER_H


#include <vector>
#include "../Utils.h"

class GeometryHolder {
public:
    GeometryHolder(std::vector<Segment> const &segments, std::vector<Point3F> const &points);

    std::vector<Segment> getSegments();

    std::vector<Point3F> getPoints();

private:
    std::vector<Segment> segments;
    std::vector<Point3F> points;
};


#endif //SIMPLE3DENGINE_GEOMETRYHOLDER_H
