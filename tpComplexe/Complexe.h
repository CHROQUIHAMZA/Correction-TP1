#pragma once
class Complexe
{
private:
	double Re;
	double Img;
public :
	Complexe(double Re = 0.0, double Img = 0.0);
	void afficher() const;
	double module() const;
	Complexe conjugue() const;

	//surcharge des operations arithmetiques entre deux complexes
	Complexe operator+(const Complexe&) const;
	Complexe operator-(const Complexe&) const;
	Complexe operator*(const Complexe&) const;
	Complexe operator/(const Complexe&) const;
	//surcharge des operations arithmetiques pour Complexe + double
	Complexe operator+(double) const;
	Complexe operator-(double) const;
	Complexe operator*(double) const;
	Complexe operator/(double) const;
	//surcharge des operations arithmetiques pour double + Complexe
	friend Complexe operator+(double ,const Complexe&) ;
	friend Complexe operator-(double, const Complexe&) ;
	friend Complexe operator*(double, const Complexe&) ;
	friend Complexe operator/(double, const Complexe&) ;

	bool operator==(const Complexe&) const;
	




};

