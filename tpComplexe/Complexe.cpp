#include "Complexe.h"
#include <iostream>
#include<cmath>
Complexe::Complexe(double Re, double Img):Re(Re),Img(Img)
{
}

void Complexe::afficher() const
{
    std::cout << this->Re << " + " << this->Img << "i\n" ;
}

double Complexe::module() const
{
    return sqrt(pow(this->Re,2)+ pow(this->Img, 2));
}

Complexe Complexe::conjugue() const
{
    return Complexe(this->Re,-1*this->Img);
}

Complexe Complexe::operator+(const Complexe& C) const
{
    return Complexe(this->Re+C.Re,this->Img+C.Img);
}

Complexe Complexe::operator-(const Complexe& C) const
{
    return Complexe(this->Re - C.Re, this->Img - C.Img);
}

Complexe Complexe::operator*(const Complexe& C) const
{
    return Complexe(this->Re*C.Re - this->Img*C.Img , this->Re*C.Img + this->Img*C.Re);
}

Complexe Complexe::operator/(const Complexe& C) const
{
    if (!C.Re && !C.Img) {
        std::cout << "Impossible de divisé par un Complexe Null"<<std::endl;
        return *this;
    }
    double denominateur = pow(C.Re,2) + pow(C.Img,2) ;
    Complexe nominateur = *this * C.conjugue();
    return Complexe(nominateur.Re/denominateur , nominateur.Img/denominateur );
}

Complexe Complexe::operator+(double d) const
{
    return Complexe(this->Re + d, this->Img);
}

Complexe Complexe::operator-(double d) const
{
    return Complexe(this->Re - d , this->Img);
}

Complexe Complexe::operator*(double d) const
{
    return Complexe(this->Re * d, this->Img*d);
}

Complexe Complexe::operator/(double d) const
{
    if (!d) {
        std::cout << "Impossible de divisé par 0" << std::endl;
        return *this;
    }
    return Complexe(this->Re / d, this->Img / d);
}

bool Complexe::operator==(const Complexe& C) const
{
    return this->Re==C.Re && this->Img==C.Img ;
}

Complexe operator+(double d, const Complexe& C)
{
    return C + d;
}

Complexe operator-(double d, const Complexe& C)
{
    return -1*C + d;
}

Complexe operator*(double d, const Complexe& C)
{
    return C * d;
}

Complexe operator/(double d, const Complexe& C)
{
    if (!C.Re && !C.Img) {
        std::cout << "Impossible de diviser par un Complexe nul" << std::endl;
        return Complexe(0, 0); 
    }
    return (d * C.conjugue()) / (pow(C.Re, 2) + pow(C.Img, 2));
}

