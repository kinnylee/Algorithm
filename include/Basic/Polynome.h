#ifndef _POLYNOME_H_
#define _POLYNOME_H_

class Polynome
{
public:
    Polynome(float *coeff = nullptr, int nMaxExp = 0);
    ~Polynome();

    Polynome operator+(const Polynome &polynome);
    Polynome operator-(const Polynome &polynome);

private:
    float *m_fCoeff;
    int m_nMaxExp;
};

#endif