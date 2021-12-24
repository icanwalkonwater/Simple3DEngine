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
        printf("    Rendering %lu points\n", obj.getPoints().size());
        for (int i = 0; i < obj.getPoints().size(); ++i) {
            drawPoint(obj.getPoints()[i], painter);
        }

        // for each segment
        printf("    Rendering %lu segments\n", obj.getSegments().size());
        for (int j = 0; j < obj.getSegments().size(); ++j) {
            drawSegment(obj.getSegments()[j], painter);
        }
    }

    puts("Rendering finished !\n");
}

void Renderer::drawSegment(Segment segment, QPainter &painter) {
    /*if (playground->getCamera().isVisible(*segment.left)
        && playground->getCamera().isVisible(*segment.right)) {*/

        QPoint left = playground->getCamera().transposePointToViewport(*segment.left);
        QPoint right = playground->getCamera().transposePointToViewport(*segment.right);

        printf("        Segment: (x: %lf, y: %lf, z: %lf) to (x: %lf, y: %lf, z: %lf)\n", segment.left->x, segment.left->y, segment.left->z, segment.right->x, segment.right->y, segment.right->z);
        printf("        Drawing line from (x: %d, y: %d) to (x: %d, y: %d)\n", left.x(), left.y(), right.x(), right.y());
        painter.drawLine(left, right);
    //}
}

void Renderer::drawPoint(Point3F point, QPainter &painter) {
    if (playground->getCamera().isVisible(point)) {
        QPoint pt = playground->getCamera().transposePointToViewport(point);

        painter.drawPoint(pt);
    }
}