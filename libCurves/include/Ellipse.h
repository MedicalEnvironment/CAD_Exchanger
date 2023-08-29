#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Curve3D.h"

class Ellipse : public Curve3D {
public:
    Ellipse(double _radiusX, double _radiusY);
    Point3D getPoint(double t) const override;
    Vector3D getDerivative(double t) const override;

private:
    double radiusX, radiusY;
};

#endif
