// Mariana Hernández Díaz
//A01711207 

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

class Producto {
public:
    Producto() : nombre(""), categoria(""), precio(0.0), cantidad(0) {}

    Producto(const std::string& nombre, const std::string& categoria, double precio, int cantidad)
        : nombre(nombre), categoria(categoria), precio(precio), cantidad(cantidad) {}

   
    std::string getNombre() const {
        return nombre;
    }

    int getCantidad() const {
        return cantidad;
    }

   
    void mostrarProducto() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Categoría: " << categoria << std::endl;
        std::cout << "Precio: $" << precio << std::endl;
        std::cout << "Cantidad: " << cantidad << std::endl;
    }

private:
    std::string nombre;
    std::string categoria;
    double precio;
    int cantidad;
};

#endif // PRODUCTO_H

