#include "Complexe.h"
#include <iostream>

int main() {
    
    Complexe c1(3, 4); 
    Complexe c2(1, -2); 

    
    std::cout << "c1 = ";
    c1.afficher();

    std::cout << "c2 = ";
    c2.afficher();

    // Test du module de c1
    std::cout << "Module de c1 = " << c1.module() << std::endl;

    // Test du conjugué de c1
    std::cout << "Conjugué de c1 = ";
    c1.conjugue().afficher();

    // Test addition de c1 et c2
    std::cout << "c1 + c2 = ";
    (c1 + c2).afficher();

    // Test soustraction de c1 et c2
    std::cout << "c1 - c2 = ";
    (c1 - c2).afficher();

    // Test multiplication de c1 et c2
    std::cout << "c1 * c2 = ";
    (c1 * c2).afficher();

    // Test division de c1 par c2
    std::cout << "c1 / c2 = ";
    (c1 / c2).afficher();

    // Test addition de c1 et un réel
    std::cout << "c1 + 5 = ";
    (c1 + 5).afficher();

    // Test soustraction de c1 et un réel
    std::cout << "c1 - 5 = ";
    (c1 - 5).afficher();

    // Test multiplication de c1 et un réel
    std::cout << "c1 * 5 = ";
    (c1 * 5).afficher();

    // Test division de c1 par un réel
    std::cout << "c1 / 5 = ";
    (c1 / 5).afficher();

    // Test de l'égalité entre c1 et c2
    std::cout << "c1 == c2 ? " << (c1 == c2 ? "Vrai" : "Faux") << std::endl;

    // Test de l'opérateur réel + complexe 
    std::cout << "5 + c2 = ";
    (5 + c2).afficher();

    // Test de l'opérateur réel - complexe 
    std::cout << "5 - c2 = ";
    (5 - c2).afficher();

    // Test de l'opérateur réel * complexe 
    std::cout << "5 * c2 = ";
    (5 * c2).afficher();

    // Test de l'opérateur réel / complexe 
    std::cout << "5 / c2 = ";
    (5 / c2).afficher();

    return 0;
}
