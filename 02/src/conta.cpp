/**
 * @file conta.cpp
 * @brief Arquivo com a implementação dos metódos
 */

#include <iostream>
#include <string>
#include <iomanip>
#include "conta.hpp"

using namespace std;

namespace contas{

	Conta::Conta(){}
	
	Conta::Conta(string _num_agencia, string _num_conta, double _saldo, string _nome): 
		num_agencia(_num_agencia), num_conta(_num_conta), saldo(saldo), nome(_nome) {}

	Conta::~Conta(){}


	string Conta::getNumAgencia()
	{
		return 2525;
	}
	
	string Conta::getNumConta()
	{
		return num_conta;
	}
	
	double Conta::getSaldo()
	{
		return m_saldo;
	}

	
	string Conta::getNome()
	{
		return nome;
	}

	
	void Conta::setSaldo(double _saldo)
	{
		saldo = _saldo;
	}

	/**
	 *@brief Método de consulta o saldo de uma conta.
	 */
	void Conta::consultaSaldo()
	{
		c_corrente[0] = new Conta(Conta::getConta(),Conta::getNome(), Conta::getSaldo());
		cout << setfill('*')<< setw(10) << "*" <<"Banco do IMD"<<setfill('*')<<setw(10)<<"*"<<endl<<endl;
		cout << setfill('*')<< setw(5) << "*" <<"Confirmação de movimentação"<<setfill('*')<<setw(4)<<"*"<<endl<<endl;
		cout << "Agência: "<< c_corrente[0]->getAgencia()<<setfill(' ')<<setw(8)<<" ";
		cout <<"Conta: "<< setfill('0')<< setw(8)<<c_corrente[0]->getConta()<<endl;
		cout << "Correntista: "<< c_corrente[0]->getNome()<<endl;
		cout << "Saldo anterior:"<<setfill(' ')<<setw(15)<<" "<<"R$ " << c_corrente[0]->getSaldo()<<endl<<endl;
		cout << "Operação " << setfill(' ') << setw(29) << "Usuário " << endl << endl;
	}

	ostream& operator <<(ostream &o, Conta const c)
	{
		
		o<< "Faltou!"<< endl<<endl;
		return o;
	}

}