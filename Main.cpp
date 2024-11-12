#include "Inventario.h"
#include "Producto.h"
#include <iostream>
#include <fstream>

void menu() {
    std::cout << "- . - Bienvenido a Mariana Store - . -" << std::endl;
    std::cout << " 1.- Agregar producto al inventario" << std::endl;
    std::cout << " 2.- Mostrar los productos del inventario" << std::endl;
    std::cout << " 3.- Ordenar los productos por nombre" << std::endl;
    std::cout << " 4.- Ordenar los productos por cantidad de producto" << std::endl;
    std::cout << " 5.- Salir" << std::endl;
}

int main() {
    Inventario inventario;

    std::string nombreArchivo = "productos.txt";
    inventario.cargarDesdeArchivo(nombreArchivo);

    int opcion = 1;
    while (opcion != 5) {
        menu();
        std::cout << "Elige una opción: ";
        std::cin >> opcion;

        if (opcion == 1) {
            std::string nombre, categoria;
            double precio;
            int cantidad;
            std::cout << "Nombre del producto: ";
            std::cin >> nombre;
            std::cout << "Categoría: ";
            std::cin >> categoria;
            std::cout << "Precio: ";
            std::cin >> precio;
            std::cout << "Cantidad: ";
            std::cin >> cantidad;

            Producto producto(nombre, categoria, precio, cantidad);
            inventario.agregaProducto(producto);

            std::ofstream archivo(nombreArchivo, std::ios::app);
            if (archivo.is_open()) {
                archivo << nombre << " " << categoria << " " << precio << " " << cantidad << std::endl;
                archivo.close();
                std::cout << "Producto agregado y guardado exitosamente.\n";
            } else {
                std::cerr << "No se pudo abrir el archivo para guardar el producto.\n";
            }
        } else if (opcion == 2) {
            
            inventario.mostrarProductos();
        } else if (opcion == 3) {

            inventario.mergeSortNombre();
            std::cout << "Productos ordenados por nombre." << std::endl;
            inventario.mostrarProductos();
        } else if (opcion == 4) {
         
            inventario.mergeSortCantidad();
            std::cout << "Productos ordenados por cantidad." << std::endl;
            inventario.mostrarProductos();
        } else if (opcion == 5) {
            
            std::cout << "¡Gracias por usar Mariana Store!" << std::endl;
        } else {
            std::cout << "Opción no válida." << std::endl;
        }
    }

    return 0;
}

