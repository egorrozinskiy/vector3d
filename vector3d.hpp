#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

class vector3d {
public:
    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;
    int x;
    int y;
    int z;
    int get_x();
    int get_y();
    int get_z();

    vector3d();
    vector3d( int _x, int _y, int _z) {};
    vector3d operator+(const vector3d &a){};
    vector3d operator-(const vector3d &a){};
    vector3d operator*(const vector3d &a){};
    vector3d operator^(const vector3d &a){};]
    vector3d operator


    // TODO: дописать

};

// TODO: дописать

#endif
