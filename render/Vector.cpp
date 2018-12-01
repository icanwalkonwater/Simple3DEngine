//
// Created by lucas on 01/12/18.
//

#include "Vector.h"

const VectorF VectorF::nullVec = {0.0, 0.0, 0.0};
const VectorF VectorF::up = {0.0, 1.0, 0.0};
const VectorF VectorF::down = {0.0, -1.0, 0.0};
const VectorF VectorF::left = {-1.0, 0.0, 0.0};
const VectorF VectorF::right = {1.0, 0.0, 0.0};
const VectorF VectorF::forward = {0.0, 0.0, 1.0};
const VectorF VectorF::backward = {0.0, 0.0, -1.0};

VectorF::VectorF(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

PointF VectorF::translatePoint(PointF point) {
    return {point.x + x, point.y + y, point.z + z};
}

VectorF VectorF::sum(VectorF other) {
    return {other.x + x, other.y + y, other.z + z};
}

VectorF VectorF::imul(double factor) {
    return {x * factor, y * factor, z * factor};
}

VectorF VectorF::invert() {
    return imul(-1.0);
}