//
// Created by lucas on 29/11/18.
//

#include <QtWidgets/QWidget>
#include <QtGui/QPainter>
#include "../playground/Playground.h"
#include "Renderer.h"

#ifndef SIMPLE3DENGINE_CANVAS_H
#define SIMPLE3DENGINE_CANVAS_H


class Canvas : public QWidget {
public:
    explicit Canvas(Renderer *renderer);

protected:
    void paintEvent(QPaintEvent *) override;

private:
    Renderer *renderer;
};


#endif //SIMPLE3DENGINE_CANVAS_H
