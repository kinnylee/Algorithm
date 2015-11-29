#include "MatrixTest.h"

int static const s_nMatrixRow = 5;
int static const s_nMatrixCol = 5;


Matrix* MatrixTest::CreateMatrix()
{
    float **matrix = nullptr;
    matrix = new float*[s_nMatrixRow];
    for (int i = 0; i < s_nMatrixRow; ++i)
    {
        matrix[i] = new float[s_nMatrixCol];
    }

    for (int i = 0; i < s_nMatrixRow; ++i)
    {
        for (int j = 0; j < s_nMatrixCol; ++j)
        {
            matrix[i][j] = i * 10 + j;
        }
    }

    Matrix *pMatrix = new Matrix(s_nMatrixRow, s_nMatrixCol, matrix);
    return pMatrix;
}

Matrix* MatrixTest::Add()
{
    return (*CreateMatrix())+(*CreateMatrix());
}

Matrix* MatrixTest::Multiple()
{
    return (*CreateMatrix())*(*CreateMatrix());
}
