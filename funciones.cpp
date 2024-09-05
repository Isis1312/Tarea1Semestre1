#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

 //* Integrantes Isis Cedeño, Jose Pernalete, Daviana Amaro/*

using namespace std;

// Factorizar
void factor(int num) {
  cout << "Factores de " << num << ":" << endl;
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      cout << i << " ";
    }
  }
  cout << endl;
}

// Valor Absoluto
double valorA(double num) {
  if (num < 0) {
    return -num;
  } else {
    return num;
  }
}

// Promedio
double promedio(double elementos[], int cantidad) {
    double suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += elementos[i];
    }
    return suma / cantidad;
}

int main() {
  int option;
  do {
    cout << "Que deseas realizar:" << endl;
<<<<<<< HEAD
    cout << "1. Visualizar portada" << endl;
    cout << "2. " << endl;
=======
    cout << "1. Factorizar un numero" << endl;
    cout << "2. Calcular valor absoluto" << endl;
>>>>>>> 5d42c9419754d9d795cb2998841e28a6ec9df28e
    cout << "3. Calcular promedio" << endl;
    cout << "4. Salir" << endl;
    cin >> option;

    switch (option) {
      case 1: {
        int num;
        cout << "Ingrese un numero para factorizar: ";
        cin >> num;
        factor(num);
        break;
      }
      case 2: {
        double num;
        cout << "Ingrese un numero para calcular su valor absoluto: ";
        cin >> num;
        cout << "El valor absoluto de " << num << " es " << valorA(num) << endl;
        break;
      }
      case 3: {
       int cantidad;
                cout << "Ingrese la cantidad de elementos para el promedio ";
                cin >> cantidad;
                double elementos[cantidad];
                for (int i = 0; i < cantidad; i++) {
                    cout << "Ingrese el elemento " << i + 1 << ": ";
                    cin >> elementos[i];
                }
                cout << "El promedio es: " << promedio(elementos, cantidad) << endl;
                break;

      }
      case 4:
        cout << "Adiossss" << endl;
        break;
      default:
        cout << "Por favor Ingrese una opcion valida" << endl;
    }
  } while (option != 4);
  return 0;
  
}