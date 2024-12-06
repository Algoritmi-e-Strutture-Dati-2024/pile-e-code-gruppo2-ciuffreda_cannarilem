#include <iostream>


template <typename T>
class Coda {
private:
    T* vettore;
    int frontIndex;
    int backIndex;
    int dimensione;
    int size;

public:
    Coda(int capacity = 10) : dimensione(capacity), size(0), frontIndex(0), backIndex(0) {
        vettore = new T[capacity];
    }

    ~Coda() {
        delete[] vettore;
    }

    void enqueue(T elem) {
        if (size == dimensione) {
            std::cout << "Coda Piena" << std::endl;
        }
        vettore[backIndex] = elem;
        backIndex = (backIndex + 1) % dimensione;
        size++;
    }

    T dequeue() {
        if (isEmpty()) {
            std::cout << "Coda Vuota" << std::endl;
        }
        T elem = vettore[frontIndex];
        frontIndex = (frontIndex + 1) % dimensione;
        size--;
        return elem;
    }

    T front() const {
        if (isEmpty()) {
            std::cout << "Coda Vuota" << std::endl;
        }
        return vettore[frontIndex];
    }

    bool isEmpty() const {
        return size == 0;
    }

    int getSize() const {
        return size;
    }
};
