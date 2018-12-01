//
// Created by lucas on 29/11/18.
//

#include <QtWidgets/QWidget>
#include <QtGui/QPainter>

#ifndef CSANDBOX_CANVAS_H
#define CSANDBOX_CANVAS_H


class Canvas : public QWidget {
protected:
    void paintEvent(QPaintEvent *event);
};


#endif //CSANDBOX_CANVAS_H
