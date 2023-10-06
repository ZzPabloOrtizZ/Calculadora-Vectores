#include "Vector4.h"

Vector4::Vector4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

float Vector4::getX() const { return x; }
float Vector4::getY() const { return y; }
float Vector4::getZ() const { return z; }
float Vector4::getW() const { return w; }

void Vector4::setX(float x) {
    this->x = x;
}

void Vector4::setY(float y) {
    this->y = y;
}

void Vector4::setZ(float z) {
    this->z = z;
}

void Vector4::setW(float w) {
    this->w = w;
}

Vector4 Vector4::operator+(const Vector4& v) const {
    return Vector4(x + v.x, y + v.y, z + v.z, w + v.w);
}

Vector4 Vector4::operator-(const Vector4& v) const {
    return Vector4(x - v.x, y - v.y, z - v.z, w - v.w);
}

Vector4 Vector4::operator*(float scalar) const {
    return Vector4(x * scalar, y * scalar, z * scalar, w * scalar);
}

Vector4 Vector4::operator/(float scalar) const {
    return Vector4(x / scalar, y / scalar, z / scalar, w / scalar);
}

float Vector4::dot(const Vector4& v) const {
    return x * v.x + y * v.y + z * v.z + w * v.w;
}

float Vector4::magnitude() const {
    return std::sqrt(x * x + y * y + z * z + w * w);
}

Vector4 Vector4::normalize() const {
    float mag = magnitude();
    if (mag == 0.0f) {
        return Vector4();
    }
    return *this / mag;
}
