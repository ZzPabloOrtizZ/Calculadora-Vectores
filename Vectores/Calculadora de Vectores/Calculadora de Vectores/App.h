#pragma once

#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

class App {
public:
    void run();

private:
    void showMainMenu();
    void handleVector2Menu();
    void handleVector3Menu();
    void handleVector4Menu();
    void inputVector(Vector3& vec);
    void displayVector(const Vector3& vec);
    void inputVector4(Vector4& vec);
    void displayVector4(const Vector4& vec);
    // Más métodos según se necesiten...
};
