// Mariana Hernández Díaz
//A01711207

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Producto.h"
#include <vector>
#include <algorithm>

class Inventario {
private:
    std::vector<Producto> productos;

    void mergeSortNombre(int inicio, int fin) {
        if (inicio >= fin) return;
        int medio = inicio + (fin - inicio) / 2;
        mergeSortNombre(inicio, medio);
        mergeSortNombre(medio + 1, fin);
        mergeNombre(inicio, medio, fin);
    }

    void mergeNombre(int inicio, int medio, int fin) {
        std::vector<Producto> temp(fin - inicio + 1);
        int a = inicio, b = medio + 1, c = 0;

        while (a <= medio && b <= fin) {
            if (productos[a].getNombre() < productos[b].getNombre()) {
                temp[c++] = productos[a++];
            } else {
                temp[c++] = productos[b++];
            }
        }
        while (a <= medio) {
            temp[c++] = productos[a++];
        }
        while (b <= fin) {
            temp[c++] = productos[b++];
        }

        for (int i = inicio; i <= fin; i++) {
            productos[i] = temp[i - inicio];
        }
    }

    void mergeSortCantidad(int inicio, int fin) {
        if (inicio >= fin) return;
        int medio = inicio + (fin - inicio) / 2;
        mergeSortCantidad(inicio, medio);
        mergeSortCantidad(medio + 1, fin);
        mergeCantidad(inicio, medio, fin);
    }

    void mergeCantidad(int inicio, int medio, int fin) {
        std::vector<Producto> temp(fin - inicio + 1);
        int a = inicio, b = medio + 1, c = 0;

        while (a <= medio && b <= fin) {
            if (productos[a].getCantidad() < productos[b].getCantidad()) {
                temp[c++] = productos[a++];
            } else {
                temp[c++] = productos[b++];
            }
        }
        while (a <= medio) {
            temp[c++] = productos[a++];
        }
        while (b <= fin) {
            temp[c++] = productos[b++];
        }

        for (int i = inicio; i <= fin; i++) {
            productos[i] = temp[i - inicio];
        }
    }

public:
    void agregaProducto(const Producto& producto) {
        productos.push_back(producto);
    }

    void mostrarProductos() const {
        if (productos.empty()) {
            std::cout << "El inventario está vacío." << std::endl;
            return;
        }
        for (const auto& producto : productos) {
            producto.mostrarProducto();
            std::cout << "-.-.-.-.-.-.- \n";
        }
    }

    void ordenaNombre() {
        mergeSortNombre(0, productos.size() - 1);
    }

    void ordenaCantidad() {
        mergeSortCantidad(0, productos.size() - 1);
    }
};

#endif // INVENTARIO_H



