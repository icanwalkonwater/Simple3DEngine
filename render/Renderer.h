//
// Created by lucas on 01/12/18.
//

#ifndef SIMPLE3DENGINE_RENDERER_H
#define SIMPLE3DENGINE_RENDERER_H


#include <QtGui/QPainter>
#include "../Utils.h"
#include "../playground/Playground.h"

class Renderer {
public:
    Renderer(Playground &playground);

    void updateViewport(Viewport &viewport);

    void render(QPainter &painter);

private:
    Playground *playground;

    void drawSegment(Segment segment, QPainter &painter);

    void drawPoint(Point3F point, QPainter &painter);
};


#endif //SIMPLE3DENGINE_RENDERER_H
