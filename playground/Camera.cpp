//
// Created by lucas on 29/11/18.
//

#include "Camera.h"

Camera::Camera(PointF position, double width, double height) {
    this->position = position;
    this->width = width;
    this->height = height;
    this->pitch = 0.0;
    this->yaw = 0.0;
    calculateBounds();
}

void Camera::calculateBounds() {
    bounds = {
            position.x,
            position.x + width,
            position.y,
            position.y + height,
            position.z,
            position.z + CAMERA_MAX_DISTANCE
    };
}

void Camera::setPosition(PointF position) {
    this->position = position;
    calculateBounds();
}

void Camera::setDimensions(double width, double height) {
    this->width = width;
    this->height = height;
    calculateBounds();
}

void Camera::setRotation(double pitch, double yaw) {
    this->pitch = pitch;
    this->yaw = yaw;
}

bool Camera::isVisible(PointF point) {
    // Camera has no rotation
    return point.x > bounds.xMin && point.x < bounds.xMax
           && point.y > bounds.yMin && point.y < bounds.yMax
           && point.z > bounds.zMin && point.z < bounds.zMin;
}