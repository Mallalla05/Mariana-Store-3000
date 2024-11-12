// Mariana Hernández Díaz
// A01711207

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>
using namespace std;

class Producto {
public:

    Producto() : nombre(""), categoria(""), precio(0.0), cantidad(0) {}

    
    Producto(const string& nombre, const string& categoria, double precio, int cantidad)
        : nombre(nombre), categoria(categoria), precio(precio), cantidad(cantidad) {}

    
    string getNombre() const {
        return nombre;
    }

    string getCategoria() const {
        return categoria;
    }

    double getPrecio() const {
        return precio;
    }

    int getCantidad() const {
        return cantidad;
    }

    void mostrarProducto() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Categoría: " << categoria << endl;
        cout << "Precio: $" << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
    }

private:
    string nombre;
    string categoria;
    double precio;
    int cantidad;
};

#endif // PRODUCTO_H
