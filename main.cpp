#include <iostream>
#include "Coda.cpp"
#include "Pila.cpp"

int main() {
    // Test della classe Pila
    std::cout << "Test della Pila" << std::endl;
    Pila<int> pila(5);

    
        pila.push(77);
        pila.push(43);
        pila.push(12);

        std::cout << "Top della pila: " << pila.top() << std::endl; 
        std::cout << "Dimensione della pila: " << pila.size() << std::endl; 

        std::cout << "Pop dalla pila: " << pila.pop() << std::endl; 
        std::cout << "Top della pila dopo pop: " << pila.top() << std::endl; 
        std::cout << "Dimensione della pila dopo pop: " << pila.size() << std::endl; 
    
   
    // Test della classe Coda
    std::cout << "\nTest della Coda" << std::endl;
    Coda<int> coda(5);


        coda.enqueue(88);
        coda.enqueue(260);
        coda.enqueue(91);

        std::cout << "Front della coda: " << coda.front() << std::endl; 
        std::cout << "Dimensione della coda: " << coda.getSize() << std::endl; 

        std::cout << "Dequeue dalla coda: " << coda.dequeue() << std::endl; 
        std::cout << "Front della coda dopo dequeue: " << coda.front() << std::endl; 
        std::cout << "Dimensione della coda dopo dequeue: " << coda.getSize() << std::endl; 
    

    return 0;
}
