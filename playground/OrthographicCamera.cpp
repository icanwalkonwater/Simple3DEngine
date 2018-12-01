//
// Created by lucas on 29/11/18.
//

#include "OrthographicCamera.h"

OrthographicCamera::OrthographicCamera(PointF position, Viewport viewport) {
    this->position = position;
    this->width = (double) viewport.width;
    this->height = (double) viewport.height;
    this->pitch = 0.0;
    this->yaw = 0.0;
    calculateBounds();
}

void OrthographicCamera::calculateBounds() {
    bounds = {
            position.x,
            position.x + width,
            position.y,
            position.y + height,
            position.z,
            position.z + CAMERA_MAX_DISTANCE
    };
}

void OrthographicCamera::setPosition(PointF position) {
    this->position = position;
    calculateBounds();
}

void OrthographicCamera::setDimensions(double width, double height) {
    this->width = width;
    this->height = height;
    calculateBounds();
}

void OrthographicCamera::setRotation(double pitch, double yaw) {
    this->pitch = pitch;
    this->yaw = yaw;
}

bool OrthographicCamera::isVisible(PointF point) {
    // Camera has no rotation
    return point.x > bounds.xMin && point.x < bounds.xMax
           && point.y > bounds.yMin && point.y < bounds.yMax
           && point.z > bounds.zMin && point.z < bounds.zMin;
}

QPoint OrthographicCamera::pointToQtPoint(PointF point) {
    // Assuming that point is visible
    return {(int) point.x, (int) (height - point.y)};
}