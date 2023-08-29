#ifndef UTILS_H
#define UTILS_H

class Point3D {
public:
    double x, y, z;
    Point3D(double _x = 0, double _y = 0, double _z = 0) : x(_x), y(_y), z(_z) {}
};

class Vector3D {
public:
    double x, y, z;
    Vector3D(double _x = 0, double _y = 0, double _z = 0) : x(_x), y(_y), z(_z) {}
};

#endif
