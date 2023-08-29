#include "Ellipse.h"
#include <cmath>

Ellipse::Ellipse(double _radiusX, double _radiusY) : radiusX(_radiusX), radiusY(_radiusY) {}

Point3D Ellipse::getPoint(double t) const {
    double x = radiusX * cos(t);
    double y = radiusY * sin(t);
    double z = 0.0;
    return Point3D(x, y, z);
}

Vector3D Ellipse::getDerivative(double t) const {
    double dx = -radiusX * sin(t);
    double dy = radiusY * cos(t);
    double dz = 0.0;
    return Vector3D(dx, dy, dz);
}
