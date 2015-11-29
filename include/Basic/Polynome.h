#ifndef _POLYNOME_H_
#define _POLYNOME_H_

#include <iostream>
#include <string>

class Polynome
{
public:
    Polynome(float *coeff = nullptr, int nMaxExp = 0);
    ~Polynome();

    int MaxExp() const;
    float* Coeff() const;

    //calculate the value when x is some value
    float GetValue(float fValue);

    //none member function must use friend if you has two parameters
    friend Polynome& operator+(const Polynome &poly1, const Polynome &poly2);
    friend Polynome& operator-(const Polynome &poly1, const Polynome &poly2);

    std::string ToString();

private:
    float *m_pCoeff;
    int m_nMaxExp;
};

#endif