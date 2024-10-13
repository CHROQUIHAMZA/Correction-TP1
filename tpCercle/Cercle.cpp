#include "Cercle.h"
#include<iostream>
#include<cmath>
const double Cercle::Pi = 3.141592653589793;
Cercle::Cercle(int id, double rayon, Point P) :id(id), rayon(rayon), center(&P)
{
}

void Cercle::afficher() const
{
    std::cout << "id : " << this->id << "Rayon : " << this->rayon << " ";
    this->center->afficher();
}

double Cercle::surface() const
{
    return Pi*pow(this->rayon,2);
}

double Cercle::perimetre() const
{
    return 2* Pi *this->rayon;
}

bool Cercle::operator==(const Cercle& C) const
{
    return  this->center==C.center && this->rayon == C.rayon;
}

bool Cercle::appartient(const Point& P) const
{
    std::cout << P.distance(*(this->center)) << std::endl;
    return this->center->distance(P) <= this->rayon;
}
