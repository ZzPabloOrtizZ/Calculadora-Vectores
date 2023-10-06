#pragma once

#include "Commons.h"

class Vector4 {
public:
    Vector4(float x = 0.0f, float y = 0.0f, float z = 0.0f, float w = 0.0f);
    float getX() const;
    float getY() const;
    float getZ() const;
    float getW() const;

    void setX(float x);
    void setY(float y);
    void setZ(float z);
    void setW(float w);

    Vector4 operator+(const Vector4& v) const;
    Vector4 operator-(const Vector4& v) const;
    Vector4 operator*(float scalar) const;
    Vector4 operator/(float scalar) const;

    float dot(const Vector4& v) const;
    float magnitude() const;
    Vector4 normalize() const;

private:
    float x, y, z, w;
};
