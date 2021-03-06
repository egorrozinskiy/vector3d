#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

class vector3d {
public:
    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;
    double x;
    double y;
    double z;
    double get_x();
    double get_y();
    double get_z();

    vector3d() : x(0), y(0), z(0){};
//    vector3d( int _x, int _y, int _z) : x(_x), y(_y), z(_z){};
    vector3d(double _x, double _y, double _z) : x(_x), y(_y), z(_z){};
    vector3d(const vector3d &o) : x(o.x),y(o.y), z(o.z) {};
    vector3d operator+(const vector3d &a) const;
    vector3d operator-(const vector3d &a) const;
    vector3d operator-() const;
    double operator*(const vector3d &a) const;
    friend vector3d operator*(double f, vector3d &vect);
    friend vector3d operator*(vector3d &vect, double f);
    vector3d operator^(const vector3d &a) const;
    bool operator==(const vector3d &a) const;
    bool operator!=(const vector3d &a) const;
    double length() const;
    void normalize();
};
#endif
