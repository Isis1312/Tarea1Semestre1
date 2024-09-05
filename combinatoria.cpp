#include <stdio.h>
#include <iostream>
using namespace std;

/* isis Cedeño, Daviana Amaro, José Pernalete */

// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Función para calcular la combinatoria C(n, r)
unsigned long long combinatoria(int n, int r) {
    if (n >= r && r >= 0)
        return factorial(n) / (factorial(r) * factorial(n - r));
    return 0; // Valor inválido si n < r
}

// Función para calcular las permutaciones P(n, m)
unsigned long long permutaciones(int m, int n) {
    if (m >= n && n >= 0)
        return factorial(m) / factorial(m - n);
    return 0; // Valor inválido si m < n
}

// Función para calcular el exponente A^n
double exponente(double base, int exp) {
    if (exp == 0)
        return 1;
    double result = base;
    for (int i = 1; i < exp; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int opcion;
    do {
        cout << "Seleccione una opción:\n";
        cout << "1. Calcular Combinatoria\n";
        cout << "2. Calcular Permutaciones\n";
        cout << "3. Calcular Exponente\n";
        cout << "4. Salir\n";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int n, r;
                cout << "Ingrese valor 1: ";
                cin >> n;
                cout << "Ingrese valor 2: ";
                cin >> r;
                cout << "C(" << n << ", " << r << ") = " << combinatoria(n, r) << endl;
                break;
            }
            case 2: {
                int m, n;
                cout << "Ingrese valor 1: ";
                cin >> m;
                cout << "Ingrese valor 2: ";
                cin >> n;
                cout << "P(" << m << ", " << n << ") = " << permutaciones(m, n) << endl;
                break;
            }
            case 3: {
                double base;
                int exp;
                cout << "Ingrese la base: ";
                cin >> base;
                cout << "Ingrese el exponente: ";
                cin >> exp;
                cout << base << "^" << exp << " = " << exponente(base, exp) << endl;
                break;
            }
            case 4:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}