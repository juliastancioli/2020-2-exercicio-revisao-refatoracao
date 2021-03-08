#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
		double calcula()
		{
			return PESO * CUSTOkg;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Custo total: " << T << endl;

		}

		EncomendaNormal(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario)
		{
			this->T = this->calcula();
		}
};

#endif