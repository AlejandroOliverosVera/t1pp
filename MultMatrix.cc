#include <MultMatrix.hh>

/////////////////////////////////////////////////////////////////////////////////
//  Identificación del alumno
//
//  Nombre Completo: Alejandro Javier Oliveros Vera
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
//   Description:
//           -->Completar la descripción
//
/////////////////////////////////////////////////////////////////////////////////



void MultMatrix::DOijk(Matrix<float>& A, Matrix<float>& B, Matrix<float>& C)
{
	//Completar
	if (A.rows() == B.cols() && A.cols() == B.rows()){

		for(size_t i=0; i < A.rows(); i++){
			for(size_t j=0; j < B.cols(); j++){
				C.value(i,j,0);
				for(size_t k=0; k < A.cols(); k++){
					C.value(i,j,C.value(i,j)+(A.value(i,k) * B.value(k,j)));
				}
			}
		}

		/*for (size_t i=0; i<C.rows(); i++){
			std::cout << "\n";
			for (size_t j=0; j<C.cols(); j++){
				std::cout << C.value(i,j) << " ";
			}
		}
		std::cout << "\n";*/
		
	}else std::cout << "La matriz debe ser cuadrada para poder multiplicarla por si misma\n";
}


void MultMatrix::DOkij(Matrix<float>& A,Matrix<float>& B, Matrix<float>& C)
{
	//Completar
	if (A.rows() == B.cols() && A.cols() == B.rows()){	

		for(size_t k=0; k < A.cols(); k++){
			for(size_t i=0; i < A.rows(); i++){
				float r = A.value(i,k);
				for(size_t j=0; j < B.cols(); j++){
					C.value(i,j, C.value(i,j)+(r*B.value(k,j)));
				}			
			}
		}

		/*for (size_t i=0; i<C.rows(); i++){
			std::cout << "\n";
			for (size_t j=0; j<C.cols(); j++){
				std::cout << " " << C.value(i,j);
			}
		}*/	
	}else std::cout << "La matriz debe ser cuadrada para poder multiplicarla por si misma\n";

}

