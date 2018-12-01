//
// Created by lucas on 29/11/18.
//

#include <QtWidgets/QWidget>
#include <QtGui/QPainter>

#ifndef SIMPLE3DENGINE_CANVAS_H
#define SIMPLE3DENGINE_CANVAS_H


class Canvas : public QWidget {
protected:
    void paintEvent(QPaintEvent *event);
};


#endif //SIMPLE3DENGINE_CANVAS_H
