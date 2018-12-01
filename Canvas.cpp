//
// Created by lucas on 29/11/18.
//

#include "Canvas.h"

void Canvas::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setPen(QPen(Qt::white, 5, Qt::SolidLine, Qt::RoundCap));
    painter.drawLine(10, 10, 1390, 790);
    painter.end();
}