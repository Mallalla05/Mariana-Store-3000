// Inventario.h
// Mariana Hernández Díaz
// A01711207

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Producto.h"
#include <fstream>
#include <iostream>
#include <string>

// Es la clase Nodo que presenta la lista doblemente enlazada, tiene una
// complejidad de creación O(1).
class Nodo {
public:
    Producto producto; // Es el producto almacenado.
    Nodo *next;
    Nodo *prev;

    // Constructor del nodo O(1).
    Nodo(const Producto &producto) : producto(producto), next(nullptr), prev(nullptr) {}
};

// Se define la clase Inventario que administra la lista doblemente enlazada de los productos.
// Nos deja agregar, mostrar y manejar el archivo.
class Inventario {
private:
    Nodo *head;
    Nodo *tail;

public:
    // Inicia la lista vacía.
    Inventario() : head(nullptr), tail(nullptr) {}

    // Agrega el producto al final de la lista.
    void agregaProducto(const Producto &producto) {
        Nodo *nuevo = new Nodo(producto);
        if (!head) {
            head = tail = nuevo;
        } else {
            tail->next = nuevo;
            nuevo->prev = tail;
            tail = nuevo;
        }
    }

    // Enseña los productos del inventario, tiene complejidad O(n).
    void mostrarProductos() const {
        if (!head) {
            std::cout << "El inventario está vacío." << std::endl;
            return;
        }

        Nodo *actual = head;
        while (actual) {
            actual->producto.mostrarProducto();
            std::cout << "-.-.-.-.-.-.-" << std::endl;
            actual = actual->next;
        }
    }

    // Utiliza el método de merge sort para ordenar los productos por nombre,
    // tiene la complejidad O(n log n).
    void mergeSortNombre() {
        if (!head || !head->next)
            return;
        head = mergeSort(head, true);
        actualizarTail(); // Actualiza la cola después de ordenar.
    }

    // Ordena los productos por cantidad igual usando merge sort.
    void mergeSortCantidad() {
        if (!head || !head->next)
            return;
        head = mergeSort(head, false);
        actualizarTail(); // Actualiza la cola después de ordenar.
    }

    // Carga los productos del archivo, la complejidad es O(n).
    void cargarDesdeArchivo(const std::string &nombreArchivo) {
        std::ifstream archivo(nombreArchivo);
        if (archivo.is_open()) {
            std::string nombre, categoria;
            double precio;
            int cantidad;
            while (archivo >> nombre >> categoria >> precio >> cantidad) {
                agregaProducto(Producto(nombre, categoria, precio, cantidad));
            }
            archivo.close();
        } else {
            std::cerr << "No se pudo abrir el archivo " << nombreArchivo << std::endl;
        }
    }

    // Guarda los productos en el archivo.
    void guardarEnArchivo(const std::string &nombreArchivo) const {
        std::ofstream archivo(nombreArchivo);
        if (archivo.is_open()) {
            Nodo *actual = head;
            while (actual) {
                archivo << actual->producto.getNombre() << " "
                        << actual->producto.getCategoria() << " "
                        << actual->producto.getPrecio() << " "
                        << actual->producto.getCantidad() << std::endl;
                actual = actual->next;
            }
            archivo.close();
        } else {
            std::cerr << "No se pudo abrir el archivo " << nombreArchivo << std::endl;
        }
    }

private:
    // Se implementa el merge sort, tiene complejidad O(n log n).
    Nodo *mergeSort(Nodo *head, bool sortByName) {
        if (!head || !head->next)
            return head;

        Nodo *medio = getMiddle(head);
        Nodo *nextToMedio = medio->next;

        medio->next = nullptr;
        if (nextToMedio) nextToMedio->prev = nullptr;

        Nodo *left = mergeSort(head, sortByName);
        Nodo *right = mergeSort(nextToMedio, sortByName);

        return merge(left, right, sortByName);
    }

    // Combina las dos listas ordenadas en una sola O(n).
    Nodo *merge(Nodo *left, Nodo *right, bool sortByName) {
        if (!left) return right;
        if (!right) return left;

        if ((sortByName && left->producto.getNombre() < right->producto.getNombre()) ||
            (!sortByName && left->producto.getCantidad() < right->producto.getCantidad())) {
            left->next = merge(left->next, right, sortByName);
            if (left->next) left->next->prev = left;
            left->prev = nullptr;
            return left;
        } else {
            right->next = merge(left, right->next, sortByName);
            if (right->next) right->next->prev = right;
            right->prev = nullptr;
            return right;
        }
    }

    // Tiene el nodo del medio de la lista O(n).
    Nodo *getMiddle(Nodo *head) {
        if (!head) return head;

        Nodo *slow = head;
        Nodo *fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Actualiza el puntero tail después de ordenar.
    void actualizarTail() {
        Nodo *temp = head;
        while (temp && temp->next) {
            temp = temp->next;
        }
        tail = temp;
    }
};

#endif // INVENTARIO_H
