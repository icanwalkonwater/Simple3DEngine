//
// Created by lucas on 01/12/18.
//

#ifndef SIMPLE3DENGINE_VECTOR_H
#define SIMPLE3DENGINE_VECTOR_H


#include "../Utils.h"

// A vector is immutable
class VectorF {
    static const VectorF nullVec;
    static const VectorF up;
    static const VectorF down;
    static const VectorF left;
    static const VectorF right;
    static const VectorF forward;
    static const VectorF backward;
public:

    VectorF(double x, double y, double z);

    PointF translatePoint(PointF point);
    VectorF sum(VectorF other);
    VectorF imul(double factor);
    VectorF invert();

private:
    double x;
    double y;
    double z;
};


#endif //SIMPLE3DENGINE_VECTOR_H
