#include "Circle.h"
#include <cmath>

Circle::Circle(double _radius) : radius(_radius) {}

Point3D Circle::getPoint(double t) const {
    double x = radius * cos(t);
    double y = radius * sin(t);
    double z = 0.0;
    return Point3D(x, y, z);
}

Vector3D Circle::getDerivative(double t) const {
    double dx = -radius * sin(t);
    double dy = radius * cos(t);
    double dz = 0.0;
    return Vector3D(dx, dy, dz);
}
