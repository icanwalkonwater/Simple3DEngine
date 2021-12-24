//
// Created by lucas on 29/11/18.
//

#include "Canvas.h"

void Canvas::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.setPen(Qt::white);

    Viewport newViewport = {size().width(), size().height()};
    renderer->updateViewport(newViewport);
    renderer->render(painter);
}

Canvas::Canvas(Renderer *renderer) {
    this->renderer = renderer;
}
