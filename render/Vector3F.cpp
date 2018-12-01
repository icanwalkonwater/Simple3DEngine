//
// Created by lucas on 01/12/18.
//

#include "Vector3F.h"

const Vector3F Vector3F::nullVec = {0.0, 0.0, 0.0};
const Vector3F Vector3F::up = {0.0, 1.0, 0.0};
const Vector3F Vector3F::down = {0.0, -1.0, 0.0};
const Vector3F Vector3F::left = {-1.0, 0.0, 0.0};
const Vector3F Vector3F::right = {1.0, 0.0, 0.0};
const Vector3F Vector3F::forward = {0.0, 0.0, 1.0};
const Vector3F Vector3F::backward = {0.0, 0.0, -1.0};

Vector3F::Vector3F(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

Point3F Vector3F::translatePoint(Point3F point) {
    return {point.x + x, point.y + y, point.z + z};
}

Vector3F Vector3F::sum(Vector3F other) {
    return {other.x + x, other.y + y, other.z + z};
}

Vector3F Vector3F::imul(double factor) {
    return {x * factor, y * factor, z * factor};
}

Vector3F Vector3F::invert() {
    return imul(-1.0);
}