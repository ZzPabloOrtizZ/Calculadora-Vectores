#include "App.h"

void App::run() {
    showMainMenu();
}

void App::showMainMenu() {
    int choice;
    do {
        std::cout << "Menú Principal:\n";
        std::cout << "1. Vector2\n";
        std::cout << "2. Vector3\n";
        std::cout << "3. Vector4\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            handleVector2Menu();
            break;
        case 2:
            handleVector3Menu();
            break;
        case 3:
            handleVector4Menu();
            break;
        case 4:
            std::cout << "Adiós!\n";
            break;
        default:
            std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (choice != 4);
}

void App::handleVector2Menu() {
    Vector2 vec1, vec2, result;
    float xValue1, yValue1, xValue2, yValue2;
    int choice;
    do {
        std::cout << "\nMenú Vector2:\n";
        std::cout << "1. Sumar\n";
        std::cout << "2. Restar\n";
        std::cout << "3. Producto punto\n";
        std::cout << "4. Magnitud\n";
        std::cout << "5. Normalizar\n";
        std::cout << "6. Regresar al menú principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> choice;

        switch (choice) {
        case 1: // Suma
            std::cout << "Ingrese el primer vector (x y separados por espacios): ";
            std::cin >> xValue1 >> yValue1;
            vec1 = Vector2(xValue1, yValue1);

            std::cout << "Ingrese el segundo vector (x y separados por espacios): ";
            std::cin >> xValue2 >> yValue2;
            vec2 = Vector2(xValue2, yValue2);

            result = vec1 + vec2;
            std::cout << "Resultado: (" << result.getX() << ", " << result.getY() << ")\n";
            break;
        case 2: {
            std::cout << "Ingrese el primer vector (x y separados por espacios): ";
            std::cin >> xValue1 >> yValue1;
            vec1.setX(xValue1);
            vec1.setY(yValue1);

            std::cout << "Ingrese el segundo vector (x y separados por espacios): ";
            std::cin >> xValue2 >> yValue2;
            vec2.setX(xValue2);
            vec2.setY(yValue2);

            result = vec1 - vec2;
            std::cout << "Resultado: (" << result.getX() << ", " << result.getY() << ")\n";
            break;
        }
        case 3: {
            std::cout << "Ingrese el primer vector (x y separados por espacios): ";
            std::cin >> xValue1 >> yValue1;
            vec1.setX(xValue1);
            vec1.setY(yValue1);

            std::cout << "Ingrese el segundo vector (x y separados por espacios): ";
            std::cin >> xValue2 >> yValue2;
            vec2.setX(xValue2);
            vec2.setY(yValue2);

            float dotResult = vec1.dot(vec2);
            std::cout << "Producto punto: " << dotResult << "\n";
            break;
        }
        case 4: {
            std::cout << "Ingrese un vector (x y separados por espacios): ";
            std::cin >> xValue1 >> yValue1;
            vec1.setX(xValue1);
            vec1.setY(yValue1);

            std::cout << "Magnitud: " << vec1.magnitude() << "\n";
            break;
        }
        case 5: {
            std::cout << "Ingrese un vector (x y separados por espacios): ";
            std::cin >> xValue1 >> yValue1;
            vec1.setX(xValue1);
            vec1.setY(yValue1);

            result = vec1.normalize();
            std::cout << "Vector normalizado: (" << result.getX() << ", " << result.getY() << ")\n";
            break;
        }
        case 6: {
            std::cout << "Regresando al menú principal.\n";
            break;
        }
        default:
            std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (choice != 6);
}



void App::handleVector3Menu() {
    Vector3 vec1, vec2, result;
    float scalarValue, dotResult, magnitudeResult;
    int choice;
    do {
        std::cout << "\nMenú Vector3:\n";
        std::cout << "1. Sumar\n";
        std::cout << "2. Restar\n";
        std::cout << "3. Multiplicar por un escalar\n";
        std::cout << "4. Dividir por un escalar\n";
        std::cout << "5. Producto punto\n";
        std::cout << "6. Producto cruz\n";
        std::cout << "7. Magnitud\n";
        std::cout << "8. Normalizar\n";
        std::cout << "9. Regresar al menú principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> choice;

        switch (choice) {
        case 1: // Suma
            inputVector(vec1);
            inputVector(vec2);
            result = vec1 + vec2;
            displayVector(result);
            break;

        case 2: // Resta
            inputVector(vec1);
            inputVector(vec2);
            result = vec1 - vec2;
            displayVector(result);
            break;

        case 3: // Multiplicación
            inputVector(vec1);
            std::cout << "Ingrese el valor escalar para la multiplicación: ";
            std::cin >> scalarValue;
            result = vec1 * scalarValue;
            displayVector(result);
            break;

        case 4: // División
            inputVector(vec1);
            std::cout << "Ingrese el valor escalar para la división: ";
            std::cin >> scalarValue;
            if (scalarValue == 0) {
                std::cout << "Error: División por cero.\n";
            }
            else {
                result = vec1 / scalarValue;
                displayVector(result);
            }
            break;

        case 5: // Producto punto
            inputVector(vec1);
            inputVector(vec2);
            dotResult = vec1.dot(vec2);
            std::cout << "Producto punto: " << dotResult << "\n";
            break;

        case 6: // Producto cruz
            inputVector(vec1);
            inputVector(vec2);
            result = vec1.cross(vec2);
            displayVector(result);
            break;

        case 7: // Magnitud
            inputVector(vec1);
            magnitudeResult = vec1.magnitude();
            std::cout << "Magnitud: " << magnitudeResult << "\n";
            break;

        case 8: // Normalizar
            inputVector(vec1);
            vec1 = vec1.normalize();
            displayVector(vec1);
            break;

        case 9:
            std::cout << "Regresando al menú principal.\n";
            break;

        default:
            std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (choice != 9);
}
void App::inputVector(Vector3& vec) {
    float x, y, z;
    std::cout << "Ingrese las componentes del vector (x y z separados por espacios): ";
    std::cin >> x >> y >> z;
    vec.setX(x);
    vec.setY(y);
    vec.setZ(z);
}

// Definición de displayVector
void App::displayVector(const Vector3& vec) {
    std::cout << "Vector: (" << vec.getX() << ", " << vec.getY() << ", " << vec.getZ() << ")\n";
}
//   //   ///  ///
void App::handleVector4Menu() {
    Vector4 vec1, vec2, result;
    float scalarValue, dotResult, magnitudeResult;
    int choice;
    do {
        std::cout << "\nMenú Vector4:\n";
        std::cout << "1. Sumar\n";
        std::cout << "2. Restar\n";
        std::cout << "3. Multiplicar por un escalar\n";
        std::cout << "4. Dividir por un escalar\n";
        std::cout << "5. Producto punto\n";
        std::cout << "6. Magnitud\n";
        std::cout << "7. Normalizar\n";
        std::cout << "8. Regresar al menú principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> choice;

        switch (choice) {
        case 1: // Suma
            inputVector4(vec1);
            inputVector4(vec2);
            result = vec1 + vec2;
            displayVector4(result);
            break;
        case 2: // Resta
            inputVector4(vec1);
            inputVector4(vec2);
            result = vec1 - vec2;
            displayVector4(result);
            break;
        case 3: // Multiplicación
            inputVector4(vec1);
            std::cout << "Ingrese el valor escalar para la multiplicación: ";
            std::cin >> scalarValue;
            result = vec1 * scalarValue;
            displayVector4(result);
            break;
        case 4: // División
            inputVector4(vec1);
            std::cout << "Ingrese el valor escalar para la división: ";
            std::cin >> scalarValue;
            if (scalarValue == 0) {
                std::cout << "Error: División por cero.\n";
            }
            else {
                result = vec1 / scalarValue;
                displayVector4(result);
            }
            break;
        case 5: // Producto punto
            inputVector4(vec1);
            inputVector4(vec2);
            dotResult = vec1.dot(vec2);
            std::cout << "Producto punto: " << dotResult << "\n";
            break;
        case 6: // Magnitud
            inputVector4(vec1);
            magnitudeResult = vec1.magnitude();
            std::cout << "Magnitud: " << magnitudeResult << "\n";
            break;
        case 7: // Normalizar
            inputVector4(vec1);
            vec1 = vec1.normalize();
            displayVector4(vec1);
            break;
        case 8:
            std::cout << "Regresando al menú principal.\n";
            break;
        default:
            std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (choice != 8);
}

void App::inputVector4(Vector4& vec) {
    float x, y, z, w;
    std::cout << "Ingrese las componentes del vector (x y z w separados por espacios): ";
    std::cin >> x >> y >> z >> w;
    vec.setX(x);
    vec.setY(y);
    vec.setZ(z);
    vec.setW(w);
}



void App::displayVector4(const Vector4& vec) {
    std::cout << "Vector4: (" << vec.getX() << ", " << vec.getY() << ", " << vec.getZ() << ", " << vec.getW() << ")\n";
}



// Implementaciones similares para handleVector3Menu y handleVector4Menu...
