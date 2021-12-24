//
// Created by lucas on 01/12/18.
//

#include "Playground.h"

Playground::Playground() {
    this->origin = {0.0, 0.0, 0.0};
    this->camera = nullptr;
}

OrthographicCamera Playground::getCamera() {
    return *camera;
}

void Playground::setCamera(OrthographicCamera camera) {
    this->camera = &camera;
}

std::vector<GeometryHolder> Playground::getObjects() {
    return this->objects;
}

void Playground::addObject(GeometryHolder &object) {
    this->objects.push_back(object);
}