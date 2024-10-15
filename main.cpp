// Mariana Hernández Díaz
// A01711207

#include "Inventario.h"
#include "Producto.h"
#include <iostream>

void menu() {
    std::cout << "- . - Bienvenido a Mariana Store - . -" << std::endl;
    std::cout << " 1.- Agregar producto al inventario" << std::endl;
    std::cout << " 2.- Mostrar los productos del inventario" << std::endl;
    std::cout << " 3.- Ordenar los productos por nombre" << std::endl;
    std::cout << " 4.- Ordenar los productos por cantidad de producto" << std::endl;
    std::cout << " 5.- Salir" << std::endl;
}

void agregarProductoslista(Inventario& inventario) {
    inventario.agregaProducto(Producto("Manzanas", "Frutas", 2.50, 15));
    inventario.agregaProducto(Producto("Leche", "Lácteos", 45, 20));
    inventario.agregaProducto(Producto("Pan", "Panadería", 3.50, 7));
    inventario.agregaProducto(Producto("Huevos", "Proteínas", 1.00, 3));
    inventario.agregaProducto(Producto("Zanahorias", "Verdura", 5.00, 45));
    inventario.agregaProducto(Producto("Yogur", "Lácteos", 20, 25));
    inventario.agregaProducto(Producto("Agua", "Bebidas", 23, 5));
    inventario.agregaProducto(Producto("Sabritas", "Botana", 18, 9));
}

int main() {
    Inventario inventario;

    agregarProductoslista(inventario);

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

            std::cout << "Producto agregado exitosamente.\n";
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
        } else if (opcion != 5) {
            std::cout << "Opción no válida, por favor elige otra opción." << std::endl;
        }
    }

    std::cout << "Gracias por usar Mariana Store." << std::endl;
    return 0;
}

