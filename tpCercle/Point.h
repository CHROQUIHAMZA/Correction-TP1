#pragma once
class Point
{
private:
	double x;
	double y;
public:
	Point(double x = 0.0, double y = 0.0);
	void afficher() const ;
	void translate(float dx, float dy);
	bool operator==(const Point&) const;
	double distance(const Point&) const;

};

