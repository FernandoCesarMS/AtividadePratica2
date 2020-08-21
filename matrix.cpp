#include "matrix.h"

// contrutor default - cria uma matriz vazia com nRows = nCols = 0
Matrix::Matrix()
{
    m = NULL;
    nRows = 0;
    nCols = 0;
}

// contrutor parametrico 1 - cria uma matriz com nRows  = rows, nCols = cols e
// com todos os elementos iguais a 0.0 (double)
Matrix::Matrix(int rows, int cols)
{int i,j;
    nRows = rows;
    nCols = cols;
    m = new double *[nRows];
    for (i = 0; i < nRows; i++){
        m[i] = new double [nCols];
        for(j = 0; j < nCols; j++){
            m[i][j] = 0.0;
        }
    }
}

// destrutor
Matrix::~Matrix()
{
    for (int i; i < nRows; i++){
        delete[] m[nCols];
        delete[] m;
    }
}

// obtem o numero de linhas
int Matrix::getRows() const
{
    return nRows;
}

// obtem o numero de colunas
int Matrix::getCols() const
{
    return nCols;
}

// torna a matriz transposta
void Matrix::transpose()
{
    int auxRows = nCols;
    int auxCols = nRows;
    Matrix aux(auxRows,auxCols);
    aux.m = new double *[auxRows];
    for(int i = 0; i < auxRows; i++){
        aux.m[i] = new double [auxCols];
        for(int j = 0; j < auxCols; j++){
            aux.m[i][j] = m[j][i];
        }
    }
    /*nCols =auxCols;
    nRows = auxRows;
    for(int i = 0; i < auxRows; i++){
        for(int j = 0; j < auxCols; j++){
            m[i][j] = aux.m[i][j];
        }
    }*/

    
    //m = aux.m;
}

// imprime o conteudo da matriz
void Matrix::print() const
{
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++){
            std::cout << m[i][j] << " ";
        }
        std::cout << "\n";
    }
}