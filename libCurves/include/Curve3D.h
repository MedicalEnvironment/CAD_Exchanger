#ifndef CURVE3D_H
#define CURVE3D_H

#include "Utils.h"

class Curve3D {
public:
    virtual ~Curve3D() = default;
    virtual Point3D getPoint(double t) const = 0;
    virtual Vector3D getDerivative(double t) const = 0;
};

#endif
