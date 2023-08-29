#include "Helix.h"
#include <cmath>

Helix::Helix(double _radius, double _step) : radius(_radius), step(_step) {}

Point3D Helix::getPoint(double t) const {
    double x = radius * cos(t);
    double y = radius * sin(t);
    double z = step * t / (2 * M_PI);
    return Point3D(x, y, z);
}

Vector3D Helix::getDerivative(double t) const {
    double dx = -radius * sin(t);
    double dy = radius * cos(t);
    double dz = step / (2 * M_PI);
    return Vector3D(dx, dy, dz);
}
