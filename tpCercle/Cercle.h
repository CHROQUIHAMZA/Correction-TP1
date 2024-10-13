#pragma once
#include"Point.h"
class Cercle
{
private:
	int id;
	double rayon;
	Point* center;
	const static double Pi;
public:
	Cercle(int id, double rayon, Point P);
	void afficher() const;
	double surface()const;
	double perimetre()const;
	bool operator==(const Cercle& C) const;
	bool appartient(const Point& P) const;




};

