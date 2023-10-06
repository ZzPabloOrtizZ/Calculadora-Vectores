#include "Vector3.h"
#include <cmath> // para funciones matemáticas como sqrt

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

float Vector3::getX() const {
    return x;
}

float Vector3::getY() const {
    return y;
}

float Vector3::getZ() const {
    return z;
}

void Vector3::setX(float x) {
    this->x = x;
}

void Vector3::setY(float y) {
    this->y = y;
}

void Vector3::setZ(float z) {
    this->z = z;
}

Vector3 Vector3::operator+(const Vector3& v) const {
    return Vector3(x + v.x, y + v.y, z + v.z);
}

Vector3 Vector3::operator-(const Vector3& v) const {
    return Vector3(x - v.x, y - v.y, z - v.z);
}

Vector3 Vector3::operator*(float scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

Vector3 Vector3::operator/(float scalar) const {
    if (scalar != 0.0f) {
        return Vector3(x / scalar, y / scalar, z / scalar);
    }
    else {
        // Puedes decidir cómo manejar la división por cero aquí
        return Vector3();
    }
}

float Vector3::dot(const Vector3& v) const {
    return x * v.x + y * v.y + z * v.z;
}

Vector3 Vector3::cross(const Vector3& v) const {
    return Vector3(
        y * v.z - z * v.y,
        z * v.x - x * v.z,
        x * v.y - y * v.x
    );
}

float Vector3::magnitude() const {
    return sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::normalize() const {
    float mag = magnitude();
    if (mag > 0.0f) {
        return (*this) / mag;
    }
    else {
        // Puedes decidir cómo manejar vectores de magnitud cero aquí
        return Vector3();
    }
}
