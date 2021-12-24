//
// Created by lucas on 01/12/18.
//

#ifndef SIMPLE3DENGINE_VECTOR_H
#define SIMPLE3DENGINE_VECTOR_H


#include "../Utils.h"

// A vector is immutable
class Vector3F {
    static const Vector3F nullVec;
    static const Vector3F up;
    static const Vector3F down;
    static const Vector3F left;
    static const Vector3F right;
    static const Vector3F forward;
    static const Vector3F backward;
public:

    Vector3F(double x, double y, double z);

    Point3F translatePoint(Point3F point);

    Vector3F sum(Vector3F other);

    Vector3F imul(double factor);

    Vector3F invert();

private:
    double x;
    double y;
    double z;
};


#endif //SIMPLE3DENGINE_VECTOR_H
