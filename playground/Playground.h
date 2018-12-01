//
// Created by lucas on 01/12/18.
//

#ifndef SIMPLE3DENGINE_PLAYGROUND_H
#define SIMPLE3DENGINE_PLAYGROUND_H


#include <vector>
#include "../Utils.h"
#include "Camera.h"
#include "GeometryHolder.h"

class Playground {
public:
    Playground();

    void setCamera(Camera camera);
    std::vector<GeometryHolder> getObjects();
    void addObject(GeometryHolder object);

private:
    PointF origin;
    Camera *camera;

    std::vector<GeometryHolder> objects;
};


#endif //SIMPLE3DENGINE_PLAYGROUND_H
