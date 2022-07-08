#include <MultMatrix.hh>


/////////////////////////////////////////////////////////////////////////////////
//  Identificación del alumno
//
//  Nombre Completo: Alejandro Javier Oliveros Vera
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
//   Description:
//      En este archivo se encuentra la implementación de las funciones de
//      multiplicacion de matrices, el primer metodo (ijk) es el convencional
//      y el segundo (kij) es el que tiene en cuenta el uso de memoria cache.
//
/////////////////////////////////////////////////////////////////////////////////




void MultMatrix::DOijk(const Matrix<float>& A,const Matrix<float>& B, Matrix<float>& C)
{
	for(size_t i=0; i < A.rows(); i++){
		for(size_t j=0; j < B.cols(); j++){
			//C.value(i,j,0);
			for(size_t k=0; k < A.cols(); k++){
				C.value(i,j,C.value(i,j)+(A.value(i,k) * B.value(k,j)));
			}
		}
	}
}


void MultMatrix::DOkij(const Matrix<float>& A,const Matrix<float>& B, Matrix<float>& C)
{
	for(size_t k=0; k < A.cols(); k++){
		for(size_t i=0; i < A.rows(); i++){
			float r = A.value(i,k);
			for(size_t j=0; j < B.cols(); j++){
				C.value(i,j, C.value(i,j)+(r*B.value(k,j)));
			}			
		}
	}
}
