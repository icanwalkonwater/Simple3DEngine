//
// Created by lucas on 01/12/18.
//

#include <iostream>
#include "Renderer.h"

Renderer::Renderer(Playground &playground) {
    this->playground = &playground;
}

void Renderer::updateViewport(Viewport &viewport) {
    this->playground->getCamera().setDimensions(viewport.width, viewport.height);
}

void Renderer::render(QPainter &painter) {
    std::vector<GeometryHolder> objs = playground->getObjects();

    printf("Rendering %d elements\n", static_cast<int>(objs.size()));

    // foreach object in playground
    for (auto &obj : objs) {

        // for each point
        printf(" Rendering %d points\n", static_cast<int>(sizeof(*obj.getPoints())));
        for (int i = 0; i < sizeof(obj.getPoints()) / sizeof(*obj.getPoints()); ++i) {
            drawPoint(obj.getPoints()[i], painter);
        }

        // for each segment
        size_t __s = sizeof(obj.getSegments());
        printf(" Rendering %zu segments\n", __s);
        for (int j = 0; j < sizeof(obj.getSegments()) / sizeof(*obj.getSegments()); ++j) {
            drawSegment(obj.getSegments()[j], painter);
        }
    }

    puts("Rendering finished !\n");
}

void Renderer::drawSegment(Segment segment, QPainter &painter) {
    if (playground->getCamera().isVisible(*segment.left)
        && playground->getCamera().isVisible(*segment.right)) {

        QPoint left = playground->getCamera().transposePointToViewport(*segment.left);
        QPoint right = playground->getCamera().transposePointToViewport(*segment.right);

        painter.drawLine(left, right);
    }
}

void Renderer::drawPoint(Point3F point, QPainter &painter) {
    if (playground->getCamera().isVisible(point)) {
        QPoint pt = playground->getCamera().transposePointToViewport(point);

        painter.drawPoint(pt);
    }
}