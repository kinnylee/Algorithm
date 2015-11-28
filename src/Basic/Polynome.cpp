#include "Polynome.h"

Polynome::Polynome(float *coeff, int nMaxExp) : m_nMaxExp(nMaxExp)
{
    if (m_fCoeff <= 0)
    {
        return;
    }

    m_fCoeff = new float(m_nMaxExp);
    for (int i = 0; i < m_nMaxExp; ++i)
    {
        m_fCoeff[i] = coeff[i];
    }
}

Polynome::~Polynome()
{

}

Polynome Polynome::operator+(const Polynome &polynome)
{
    //todo
    Polynome poly;
    return poly;
}

Polynome Polynome::operator-(const Polynome &polynome)
{
    //todo
    Polynome poly;
    return poly;
}

