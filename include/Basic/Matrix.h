#ifndef _MATRIX_H_
#define _MATRIX_H_

class Matrix
{
public:
    Matrix();
    Matrix(int nRow, int nCol, float ** value = nullptr);
    ~Matrix();

    int GetRow() const;
    int GetCol() const;
    float** GetValue() const;

    friend Matrix* operator+(const Matrix &matrix1, const Matrix &matrix2);
    friend Matrix* operator*(const Matrix &matrix1, const Matrix &matrix2);

    void PrintOut();

private:
    int m_nRow;
    int m_nCol;
    float **m_pValue;
};

#endif