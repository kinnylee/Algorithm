#include "Polynome.h"

Polynome::Polynome(float *coeff, int nMaxExp) : m_nMaxExp(nMaxExp)
{
    if (m_pCoeff <= 0)
    {
        return;
    }

    m_pCoeff = new float[m_nMaxExp];
    for (int i = 0; i < m_nMaxExp; ++i)
    {
        m_pCoeff[i] = coeff[i];
    }
}

Polynome::~Polynome()
{

}     

int Polynome::MaxExp() const
{
    return m_nMaxExp;
}

float* Polynome::Coeff() const
{
    return m_pCoeff;
}

std::string Polynome::ToString()
{
    std::string result;
    for (int i = 0; i < m_nMaxExp; ++i)
    {
        if (m_pCoeff[i])
        {
            char sCoeff[10];
            _gcvt_s(sCoeff, 10, m_pCoeff[i], 4);
            result += sCoeff;
            if (i != 0)
            {
                result += "*X^";
                char sExp[10];
                _itoa_s(i, sExp, 4, 10);
                result += sExp;
            }
            if (i != m_nMaxExp - 1)
            {
                result += "+";
            }
        }
    }
    return result;
}

float Polynome::GetValue(float fValue)
{
    float fResult = 0.0;
    for (int i = m_nMaxExp; i > 0; --i)
    {
        float fSub = m_pCoeff[i] * fValue + m_pCoeff[i-1];
        fResult += fSub;
    }
    return fResult;
}

Polynome& operator+(const Polynome &poly1, const Polynome &poly2)
{
    int nExp = poly1.MaxExp() > poly2.MaxExp() ? poly1.MaxExp() : poly2.MaxExp();
    float *pCoeff1 = poly1.Coeff();
    float *pCoeff2 = poly2.Coeff();
    float *pCoeff = new float[nExp];

    int i = 0;
    while (i < poly1.MaxExp() && i < poly2.MaxExp())
    {
        pCoeff[i] = pCoeff1[i] + pCoeff2[i];
        i++;
    }

    while (i < poly1.MaxExp())
    {
        pCoeff[i] = pCoeff1[i];
        i++;
    }

    while (i < poly2.MaxExp())
    {
        pCoeff[i] = pCoeff2[i];
        i++;
    }
    return Polynome(pCoeff, nExp);
}

Polynome& operator-(const Polynome &poly1, const Polynome &poly2)
{
    int nExp = poly1.MaxExp() > poly2.MaxExp() ? poly1.MaxExp() : poly2.MaxExp();
    float *pCoeff1 = poly1.Coeff();
    float *pCoeff2 = poly2.Coeff();
    float *pCoeff = new float[nExp];

    int i = 0;
    while (i < poly1.MaxExp() && i < poly2.MaxExp())
    {
        pCoeff[i] = pCoeff1[i] - pCoeff2[i];
        i++;
    }

    while (i < poly1.MaxExp())
    {
        pCoeff[i] = pCoeff1[i];
        i++;
    }

    while (i < poly2.MaxExp())
    {
        pCoeff[i] = pCoeff2[i];
        i++;
    }
    return Polynome(pCoeff, nExp);
}

