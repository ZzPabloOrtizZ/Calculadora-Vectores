#pragma once

class Vector2 {
public:
    Vector2(float x = 0.0f, float y = 0.0f);

    // M�todos de acceso (getters)
    float getX() const;
    float getY() const;

    // M�todos de modificaci�n (setters)
    void setX(float x);
    void setY(float y);

    // Operadores sobrecargados
    Vector2 operator+(const Vector2& v) const;
    Vector2 operator-(const Vector2& v) const;
    Vector2 operator*(float scalar) const;
    Vector2 operator/(float scalar) const;

    // Otros m�todos para operaciones de vectores
    float dot(const Vector2& v) const;
    float magnitude() const;
    Vector2 normalize() const;

private:
    float x, y;
};
