// Productos.h
// Mariana Hernández Díaz
// A01711207

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>
using namespace std;

// Se define la clase que presenta el producto.
class Producto {
public:
    // Constructor por defecto 0(1).
    Producto() : nombre(""), categoria(""), precio(0.0), cantidad(0) {}

    // Constructor que inicia el producto con valores específicos 0(1).
    Producto(const string &nombre, const string &categoria, double precio, int cantidad)
        : nombre(nombre), categoria(categoria), precio(precio), cantidad(cantidad) {}

    // Se define el método para obtener los atributos del producto.
    string getNombre() const { return nombre; }
    string getCategoria() const { return categoria; }
    double getPrecio() const { return precio; }
    int getCantidad() const { return cantidad; }

    // Enseña los atributos del producto.
    void mostrarProducto() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Categoría: " << categoria << endl;
        cout << "Precio: $" << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
    }

private:
    // Son los atributos del producto.
    string nombre;
    string categoria;
    double precio;
    int cantidad;
};

#endif // PRODUCTO_H
