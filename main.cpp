#include <iostream>

#include <QApplication>
#include <QWidget>
#include <QtGui/QPainter>
#include "render/Canvas.h"
#include "playground/SimpleCube.h"

int main(int argc, char **argv) {
    std::cout << "Starting app..." << std::endl;

    QApplication app(argc, argv);

    Playground playground;
    playground.setCamera(OrthographicCamera({0.0, 0.0, 0.0}, {1400, 800}));

    Point3F origin = {500.0, 200.0, 0.0};
    SimpleCube cube(origin, 400.0, 400.0, 400.0);


    Point3F p1 {
        200.0, 50.0, 0.0
    };

    Point3F p2 {
        1000.0, 500.0, 100.0
    };

    std::vector<Segment> yolo {
            {&p1, &p2}
    };

    GeometryHolder segm(yolo, std::vector<Point3F>());

    playground.addObject(cube);

    Renderer renderer(playground);

    Canvas canvas(&renderer);
    canvas.setFixedSize(1400, 800);
    canvas.show();

    return app.exec();
}

#include "playground/SimpleCube.h"
