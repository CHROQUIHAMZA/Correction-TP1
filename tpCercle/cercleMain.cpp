#include <iostream>
#include "Point.h"
#include "Cercle.h"

int main() {
    // Créer deux points
    Point p1;  // Point à l'origine
    Point p2(3, 4);  // Point à coordonnée (3, 4)

    // Tester la méthode afficher pour les points
    std::cout << "Affichage du point p1 : ";
    p1.afficher();

    std::cout << "Affichage du point p2 : ";
    p2.afficher();

    // Calculer et afficher la distance entre p1 et p2
    std::cout << "Distance entre p1 et p2 : " << p1.distance(p2) << std::endl;

    // Tester la méthode translate
    std::cout << "Translation de p2 de (1, 2)..." << std::endl;
    p2.translate(1, 2);
    std::cout << "Nouvelle position de p2 : ";
    p2.afficher();

    // Tester l'opérateur == pour comparer deux points
    std::cout << "Comparaison entre p1 et p2 : "
        << ((p1 == p2) ? "Les points sont égaux" : "Les points sont différents")
        << std::endl;

    // Créer un cercle centré sur p1 avec un rayon de 5
    Cercle c1(1, 5.0, p1);

    // Tester les méthodes afficher, surface, et perimetre pour le cercle
    std::cout << "Affichage du cercle c1 : " << std::endl;
    c1.afficher();

    std::cout << "Surface du cercle c1 : " << c1.surface() << std::endl;
    std::cout << "Périmètre du cercle c1 : " << c1.perimetre() << std::endl;

    // Tester la méthode appartient pour voir si le point p2 appartient au cercle
    std::cout << "Est-ce que p2 appartient au cercle c1 ? : "
        << (c1.appartient(p2) ? "Oui" : "Non")
        << std::endl;

    return 0;
}
