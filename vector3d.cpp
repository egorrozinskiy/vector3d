#include "vector3d.hpp"

#include <cmath>

const vector3d vector3d::X = {1, 0, 0};
const vector3d vector3d::Y = {0, 1, 0};
const vector3d vector3d::Z = {0, 0, 1};
const vector3d vector3d::ZERO = {0, 0, 0};
//friend
vector3d operator*(double f, vector3d &vect) {
    return vector3d(f*vect.x, f*vect.y, f*vect.z);
}
//friend
vector3d operator*(vector3d &vect, double f) {
    return vector3d(f*vect.x, f*vect.y, f*vect.z);
}
double vector3d::get_x() {
    return x;
}
double vector3d::get_y() {
    return y;
}
double vector3d::get_z() {
    return z;
}
vector3d vector3d::operator+(const vector3d &a) const {
    return vector3d(x + a.x, y + a.y, z + a.z);
}
vector3d vector3d::operator-() const {
    return vector3d(-x, -y, -z);
}
vector3d vector3d::operator-(const vector3d &a) const {
    return vector3d(x - a.x, y - a.y, z - a.z);
}
double vector3d::operator*(const vector3d &a) const{
    return (x*a.x + y*a.y + z*a.z);
}
vector3d vector3d::operator^(const vector3d &a) const {
    return  vector3d( y*a.z -z*a.y, z*a.x - x*a.z, x*a.y - y*a.x );
}
bool vector3d::operator==(const vector3d &a) const {
    return ( (x == a.x) && (y == a.y) && (z == a.z) );
}
bool vector3d::operator!=(const vector3d &a) const {
    return ( (x != a.x) || (y != a.y) || (z != a.z) );
}
double vector3d::length() const {
    return std::sqrt( (x*x) + (y*y) + (z*z) );
}
void vector3d::normalize(){
    double len = length();
    x = x/len;
    y = y/len;
    z = z/len;
}
