#pragma once

#include "Commons.h"

class Vector3 {
public:
    Vector3(float x = 0.0f, float y = 0.0f, float z = 0.0f);

    // Getters
    float getX() const;
    float getY() const;
    float getZ() const;

    // Setters
    void setX(float x);
    void setY(float y);
    void setZ(float z);

    // Operadores sobrecargados
    Vector3 operator+(const Vector3& v) const;
    Vector3 operator-(const Vector3& v) const;
    Vector3 operator*(float scalar) const;
    Vector3 operator/(float scalar) const;

    // Otros métodos
    float dot(const Vector3& v) const;
    Vector3 cross(const Vector3& v) const;
    float magnitude() const;
    Vector3 normalize() const;

private:
    float x, y, z;
};
