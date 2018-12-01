//
// Created by lucas on 29/11/18.
//

#ifndef CSANDBOX_CAMERA_H
#define CSANDBOX_CAMERA_H


#include <QtCore/QPointF>
#include <QtCore/QRect>

class Camera {
public:
    Camera(QPointF position, double width, double height);

    void setPosition(QPointF position);
    void setDimensions(double width, double height);
    void setRotation(double pitch, double yaw);
    QRectF getOrthographicRect();
private:
    QPointF position;
    double height, width;
    double pitch, yaw;
};


#endif //CSANDBOX_CAMERA_H
