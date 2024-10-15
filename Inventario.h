// Mariana Hernández Díaz
//A01711207

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Producto.h"
#include <iostream>

class Nodo {
public:
    Producto producto;
    Nodo* next;
    Nodo* prev;

    Nodo(const Producto& producto) : producto(producto), next(0), prev(0) {}
};

class Inventario {
private:
    Nodo* head;
    Nodo* tail;

public:
    Inventario() : head(0), tail(0) {}

    void agregaProducto(const Producto& producto) {
        Nodo* nuevo = new Nodo(producto);
        if (!head) {
            head = tail = nuevo;
        } else {
            tail->next = nuevo;  
            nuevo->prev = tail;  
            tail = nuevo;     
        }
    }

    void mostrarProductos() const {
        if (!head) {
            std::cout << "El inventario está vacío." << std::endl;
            return;
        }

        Nodo* actual = head;
        while (actual) {
            actual->producto.mostrarProducto();
            std::cout << "-.-.-.-.-.-.- \n";
            actual = actual->next; 
        }
    }

    void mergeSortNombre() {
        if (!head || !head->next) return;
        head = mergeSort(head, true);
    }

    void mergeSortCantidad() {
        if (!head || !head->next) return;
        head = mergeSort(head, false);
    }

private:
    Nodo* mergeSort(Nodo* head, bool sortByName) {
        if (!head || !head->next) return head;

        Nodo* medio = getMiddle(head);
        Nodo* nextToMedio = medio->next;

        medio->next = 0; 
        nextToMedio->prev = 0; 
        Nodo* left = mergeSort(head, sortByName);
        Nodo* right = mergeSort(nextToMedio, sortByName);

        return merge(left, right, sortByName);
    }

    Nodo* merge(Nodo* left, Nodo* right, bool sortByName) {
        if (!left) return right;
        if (!right) return left;

        if ((sortByName && left->producto.getNombre() < right->producto.getNombre()) ||
            (!sortByName && left->producto.getCantidad() < right->producto.getCantidad())) {
            left->next = merge(left->next, right, sortByName);
            left->next->prev = left; 
            left->prev = 0; 
            return left;
        } else {
            right->next = merge(left, right->next, sortByName);
            right->next->prev = right; 
            right->prev = 0; 
            return right;
        }
    }

    Nodo* getMiddle(Nodo* head) {
        if (!head) return head;

        Nodo* lento = head;
        Nodo* rapido = head->next;

        while (rapido && rapido->next) {
            lento = lento->next;
            rapido = rapido->next->next;
        }
        return lento;
    }
};

#endif // INVENTARIO_H



