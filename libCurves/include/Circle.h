#ifndef CIRCLE_H
#define CIRCLE_H

#include "Curve3D.h"

class Circle : public Curve3D {
public:
    Circle(double _radius);
    Point3D getPoint(double t) const override;
    Vector3D getDerivative(double t) const override;
    double radius;
};

#endif
