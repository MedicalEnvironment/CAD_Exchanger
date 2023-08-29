#ifndef HELIX_H
#define HELIX_H

#include "Curve3D.h"

class Helix : public Curve3D {
public:
    Helix(double _radius, double _step);
    Point3D getPoint(double t) const override;
    Vector3D getDerivative(double t) const override;

private:
    double radius, step;
};

#endif
