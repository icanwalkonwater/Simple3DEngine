//
// Created by lucas on 29/11/18.
//

#include "Camera.h"

Camera::Camera(QPointF position, double width, double height) {
    this->position = position;
    this->width = width;
    this->height = height;
    this->pitch = 0.0;
    this->yaw = 0.0;
}

void Camera::setPosition(QPointF position) {
    this->position = position;
}

void Camera::setDimensions(double width, double height) {
    this->width = width;
    this->height = height;
}

void Camera::setRotation(double pitch, double yaw) {
    this->pitch = pitch;
    this->yaw = yaw;
}

QRectF Camera::getOrthographicRect() {
    // We'll see the rotation later
    QPointF cornerUp(position.x() - width / 2, position.y() + height / 2);
    QPointF cornerDown(cornerUp.x() + width, cornerUp.y() - height);

    return {cornerUp, cornerDown};
}
