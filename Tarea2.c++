#include <iostream>
using namespace std;

int main() {
    const double precio_refresco_detal = 10;
    const double precio_refresco_mayor = 5;
    const double precio_malta_detal = 12;
    const double precio_malta_mayor = 7;

    int cantidadR, cantidadM;

    string razonS = " ";
    string rif = " ";
    int totalCompras = 0;
    int cantidadCompras = 0;

    cout << "Ingrese la razon social del proveedor: ";
    cin >> razonS;

    cout << "Ingrese el rif del proveedor: ";
    cin >> rif;

    cout << "Ingrese la cantidad de compras realizadas por el proveedor: ";
    cin >> cantidadCompras;

    for (int i = 1; i <= cantidadCompras; i++) {
        int montoCompra;
        cout << "Ingrese el monto de la compra " << i << ": ";
        cin >> montoCompra;
        totalCompras += montoCompra;
    }

    cout << "Ingrese la cantidad de refrescos comprados: ";
    cin >> cantidadR;
    cout << "Ingrese la cantidad de malta compradas: ";
    cin >> cantidadM;

    double montoR, montoM;

    if (cantidadR >= 10) {
        montoR = cantidadR * precio_refresco_mayor;
    } else {
        montoR = cantidadR * precio_refresco_detal;
    }

    if (cantidadM >= 12) {
        montoM = cantidadM * precio_malta_mayor;
    } else {
        montoM = cantidadM * precio_malta_detal;
    }

    cout << "Monto total por refrescos: " << montoR << endl;
    cout << "Monto total por maltas: " << montoM << endl;

    return 0;
}