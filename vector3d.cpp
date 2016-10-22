#include "vector3d.hpp"

#include <cmath>

const vector3d vector3d::X = {1, 0, 0};
const vector3d vector3d::Y = {0, 1, 0};
const vector3d vector3d::Z = {0, 0, 1};
const vector3d vector3d::ZERO = {0, 0, 0};

friend operator*

int vector3d::get_x() {
    return x;
}
int vector3d::get_y() {
    return y;
}
int vector3d::get_z() {
    return z;
}
vector3d::vector3d(){
    x=0;
    y=0;
    z=0;
}
vector3d::vector3d()( int _x, int _y, int _z){
    x = _x;
    y = _y;
    z = _z;
}
vector3d vector3d::operator+(const vector3d &a){
    return(x + a.x, y + a.y, z + a.z);
}
vector3d vector3d::operator-(const vector3d &a) {
    return(x - a.x, y - a.y, z - a.z);
}
vector3d vector3d::DotProduct(const vector3d &a){
    return x*a.x + y*a.y + z*a.z);
}
vector3d vector3d::operator^(const vector3d &a){
    return(((y*(a.z)) -(z*(a.y))), ((z*(a.y)) - (x*(a.z))), ((x*(a.y)) - (y*(a.x))) );
}
bool vector3d::operator==(const vector3d &a) const {
    return (x == a.x) && (y == a.y) && (z == a.z);
}
bool vector3d::operator!=(const vector3d &a) const {
    return (x != a.x) | (y != a.y) | (z != a.z);
}
double vector3d::Length() const {
    return sqrt((x*x) + (y*y) + (z*z));
}
double vector3d::Normalize() const {
    return (x/(sqrt(Length), y/(sqrt(Length), z/(sqrt(Length)));
}
