//
// Created by lucas on 29/11/18.
//

#ifndef SIMPLE3DENGINE_CAMERA_H
#define SIMPLE3DENGINE_CAMERA_H

#include <QtCore/QPointF>
#include <QtCore/QRect>
#include "../Utils.h"

class OrthographicCamera {
    static constexpr double CAMERA_MAX_DISTANCE = 500.0;
public:
    OrthographicCamera(PointF position, Viewport viewport);
    struct Bounds {
        double xMin;
        double xMax;
        double yMin;
        double yMax;
        double zMin;
        double zMax;
    };

    void setPosition(PointF position);
    void setDimensions(double width, double height);
    void setRotation(double pitch, double yaw);
    bool isVisible(PointF point);
    QPoint pointToQtPoint(PointF point);

private:
    PointF position;
    double height, width;
    double pitch, yaw;
    Bounds bounds;

    void calculateBounds();
};


#endif //SIMPLE3DENGINE_CAMERA_H
