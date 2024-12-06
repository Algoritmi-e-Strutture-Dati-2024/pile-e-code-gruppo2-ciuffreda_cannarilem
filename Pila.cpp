#include <iostream>


template <typename T>
class Pila {
private:
    T* vettore;
    int topIndex;
    int dimensione;

public:
    Pila(int capacity = 10) : dimensione(capacity), topIndex(-1) {
        vettore = new T[capacity];
    }

    ~Pila() {
        delete[] vettore;
    }

    void push(T elem) {
        if (topIndex == dimensione - 1) {
            std::cout << "Pila Piena" << std::endl;
        }
        vettore[++topIndex] = elem;
    }

    T pop() {
        if (isEmpty()) {
            std::cout << "Pila Vuota" << std::endl;
        }
        return vettore[topIndex--];
    }

    T top() const {
        if (isEmpty()) {
            std::cout << "Pila Vuota" << std::endl;
        }
        return vettore[topIndex];
    }

    bool isEmpty() const {
        return topIndex == -1;
    }

    int size() const {
        return topIndex + 1;
    }
};
