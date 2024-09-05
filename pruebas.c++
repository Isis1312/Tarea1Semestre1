#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

// Función menu de idiomas
void menu_idiomas(){
    std::cout<< " Seleccione un idioma "<< std::endl;
    std::cout<< " Español "<< std::endl;
    std::cout<< " Ingles "<< std::endl;
}

// Función para abrir un archivo PDF
void abrirArchivo(const std::string& ruta) {
    // Utiliza el comando del sistema para abrir el archivo PDF
    std::string comando = "start " + ruta; 

    system(comando.c_str());
}

int main() {
    std::cout << "   Gestor de archivos  " << std::endl;
    std::cout << " Seleccione una opcion" << std::endl;
    std::cout << "1. Archivo" << std::endl;
    std::cout << "4. Salir" << std::endl;

    int opcion;
    std::string ruta;

    while (true) {

        std::cout << "Ingrese la opcion deseada: " << std::endl;
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                ruta =  "C:/Users/isis0/Documents/ARTICULOS/Pp.pdf"; //ruta
                abrirArchivo(ruta);
                break;
            
                    std::cout << "Opción invalida. Por favor, intentelo de nuevo." << std::endl;
        }
    }
}  