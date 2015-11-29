#include "PolynomeTest.h"

int static const s_MaxExp = 5;
float coeff1[s_MaxExp] = { 5, 0, 3, -2, 7 };
float coeff2[s_MaxExp - 1] = { 2, 0, 0, 4 };

Polynome PolynomeTest::Add()
{
    return Polynome(coeff1, s_MaxExp) + Polynome(coeff2, s_MaxExp - 1);
}

Polynome PolynomeTest::Subtract()
{
    return Polynome(coeff1, s_MaxExp) - Polynome(coeff2, s_MaxExp - 1);
}

