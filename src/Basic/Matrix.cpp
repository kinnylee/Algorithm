#include <iostream>
#include <assert.h>

#include "Matrix.h"

Matrix::Matrix() : m_nRow(0), m_nCol(0), m_pValue(nullptr)
{

}

Matrix::Matrix(int nRow, int nCol, float ** value)
    : m_nRow(nRow), m_nCol(nCol)
{
    m_pValue = new float*[m_nRow];
    for (int i = 0; i < m_nRow; ++i)
    {
        m_pValue[i] = new float[m_nCol];
    }

    for (int i = 0; i < m_nRow; ++i)
    {
        for (int j = 0; j < m_nCol; ++j)
        {
            if (value != nullptr)
            {
                m_pValue[i][j] = value[i][j];
            }
            else
            {
                m_pValue[i][j] = 0;
            }
        }
    }
}

Matrix::~Matrix()
{
    for (int i = 0; i < m_nRow; ++i)
    {
        delete[] m_pValue[i];
    }
    m_pValue = nullptr;
}

void Matrix::PrintOut()
{
    for (int i = 0; i < m_nRow; ++i)
    {
        for (int j = 0; j < m_nCol; ++j)
        {
            std::cout << m_pValue[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int Matrix::GetRow() const
{
    return m_nRow;
}

int Matrix::GetCol() const
{
    return m_nCol;
}

float** Matrix::GetValue() const
{
    return m_pValue;
}

Matrix* operator+(const Matrix &matrix1, const Matrix &matrix2)
{
    if (matrix1.GetRow() != matrix2.GetRow())
    {
        assert(false);
        return nullptr;
    }
    int p = matrix1.GetRow();
    int q = matrix2.GetCol();
    int r = matrix1.GetCol();
    Matrix *pResult = new Matrix(p, r);
    float **pValue = pResult->GetValue();
    for (int i = 0; i < p; ++i)
    {
        for (int j = 0; j < q; ++j)
        {
            for (int k = 0; k < r; ++k)
            {
                pValue[i][j] += matrix1.GetValue()[i][k] + matrix2.GetValue()[k][j];
            }
        }
    }
    return pResult;
}

Matrix* operator*(const Matrix &matrix1, const Matrix &matrix2)
{
    if (matrix1.GetRow() != matrix2.GetRow())
    {
        assert(false);
        return nullptr;
    }
    int p = matrix1.GetRow();
    int q = matrix2.GetCol();
    int r = matrix1.GetCol();
    Matrix *pResult = new Matrix(p, q);
    float **pValue = pResult->GetValue();
    for (int i = 0; i < p; ++i)
    {
        for (int j = 0; j < q; ++j)
        {
            for (int k = 0; k < r; ++k)
            {
                pValue[i][j] += matrix1.GetValue()[i][k] * matrix2.GetValue()[k][j];
            }
        }
    }
    return pResult;
}

