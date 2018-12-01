//
// Created by lucas on 01/12/18.
//

#include "SimpleCube.h"

SimpleCube::SimpleCube(PointF *origin, double width, double height, double depth) :
        GeometryHolder(buildSegments(origin, width, height, depth), nullptr) {
}

Segment *SimpleCube::buildSegments(PointF *origin, double width, double height, double depth) {
    // All points relative to origin (0, 0, 0)
    // X expand toward positive (aka right)
    // Y expand toward positive (aka up)
    // Z expand toward positive (aka behind)

    PointF points[8] = {
            // Front face
            // Down left
            *origin,
            // Down right
            {origin->x + width, origin->y, origin->z},
            // Up left
            {origin->x, origin->y + height, origin->z},
            // Up right
            {origin->x + width, origin.y + height, origin->z},

            // Back face
            // Down left
            {origin->x, origin->y, origin->z + depth},
            // Down right
            {origin->x + width, origin->y, origin->z + depth},
            // Up left
            {origin->x, origin->y + height, origin->z + depth},
            // Up right
            {origin->x + width, origin->y + height, origin->z + depth}
    };

    // 8 corners
    // 0-3: front face
    // 4-7: back face
    // n+0: Corner down left
    // n+1: Corner down right
    // n+2: Corner up left
    // n+3: Corner up right

    Segment segments[12]{
            // Front face
            // Horizontal down
            {&points[0], &points[1]},
            // Horizontal up
            {&points[2], &points[3]},
            // Vertical left
            {&points[0], &points[2]},
            // Vertical right
            {&points[1], &points[3]},

            // Back face
            // Horizontal down
            {&points[4], &points[5]},
            // Horizontal up
            {&points[6], &points[7]},
            // Vertical left
            {&points[4], &points[6]},
            // Vertical right
            {&points[5], &points[7]},

            // Links
            // Down left link
            {&points[0], &points[4]},
            // Down right link
            {&points[1], &points[5]},
            // Up left link
            {&points[2], &points[6]},
            // Up right link
            {&points[3], &points[7]}
    };

    return segments;
}
