//
// Created by lucas on 01/12/18.
//

#ifndef SIMPLE3DENGINE_PLAYGROUND_H
#define SIMPLE3DENGINE_PLAYGROUND_H


#include <vector>
#include "../Utils.h"
#include "OrthographicCamera.h"
#include "GeometryHolder.h"

class Playground {
public:
    Playground();

    void setCamera(OrthographicCamera camera);
    std::vector<GeometryHolder> getObjects();
    void addObject(GeometryHolder object);

private:
    Point3F origin;
    OrthographicCamera *camera;

    std::vector<GeometryHolder> objects;
};


#endif //SIMPLE3DENGINE_PLAYGROUND_H
