// Mariana Hernández Díaz
//A01711207 

#include "Inventario.h"
#include "Producto.h"
#include <iostream>

void menu() {
    std::cout << "- . - Bienvenido a Mariana Store - . -" << std::endl;
    std::cout << " 1.- Agregar producto al inventario" << std::endl;
    std::cout << " 2.- Mostrar los productos del inventario" << std::endl;
    std::cout << " 3.- Ordenar los productos por nombre" << std::endl;
    std::cout << " 4.- Ordenar los productos por cantidad" << std::endl;
    std::cout << " 5.- Salir" << std::endl;
}

int main() {
    Inventario inventario;
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
        } else if (opcion == 2) {
            inventario.mostrarProductos();
        } else if (opcion == 3) {
            inventario.ordenaNombre();
            std::cout << "Productos ordenados por nombre." << std::endl;
        } else if (opcion == 4) {
            inventario.ordenaCantidad();
            std::cout << "Productos ordenados por cantidad." << std::endl;
        }
    }

    std::cout << "Gracias por usar Mariana Store." << std::endl;
    return 0;
}

