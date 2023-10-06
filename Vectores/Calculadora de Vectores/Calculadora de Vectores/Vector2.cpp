#include "Vector2.h"
#include <cmath> // Para std::sqrt, usado en magnitude()

Vector2::Vector2(float x, float y) : x(x), y(y) {}

float Vector2::getX() const { return x; }

float Vector2::getY() const { return y; }

void Vector2::setX(float x) { this->x = x; }

void Vector2::setY(float y) { this->y = y; }

Vector2 Vector2::operator+(const Vector2& v) const {
    return Vector2(x + v.x, y + v.y);
}

Vector2 Vector2::operator-(const Vector2& v) const {
    return Vector2(x - v.x, y - v.y);
}

Vector2 Vector2::operator*(float scalar) const {
    return Vector2(x * scalar, y * scalar);
}

Vector2 Vector2::operator/(float scalar) const {
    // Nota: No hay chequeo para división por cero!
    return Vector2(x / scalar, y / scalar);
}

float Vector2::dot(const Vector2& v) const {
    return x * v.x + y * v.y;
}

float Vector2::magnitude() const {
    return std::sqrt(x * x + y * y);
}

Vector2 Vector2::normalize() const {
    float mag = magnitude();
    // Nota: No hay chequeo para división por cero!
    return Vector2(x / mag, y / mag);
}
