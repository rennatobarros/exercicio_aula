/**
 * @file conta.hpp
 * @brief Classe base da Conta
 */

#ifndef _CONTA_HPP_
#define _CONTA_HPP_

#include <iostream>
#include <string>

namespace contas{
		class Conta{

	public:
		/** Construtor padrão sem parametros */
		Conta();

		/** Construtor padrão parametrizado */
		Conta(string, string, double, string);
		
		/** Destrutor padrão */
		~Conta();

		// Getters
		string getNumAgencia();
		string getNumConta();
		double getSaldo();
		string getNome();

		// Setters
		void setNumAgencia(string);
		void setNumConta(string);
		void setSaldo(double);
		void setNome(string);

		void consultaSaldo();

		// Sobrecarga de Operadores
		friend std::ostream& operator<< (std::ostream &o, Conta &c);


	private:
		/** Armezena o número da Agencia */
		string num_agencia;

		/** Armazena o numero da conta */
		string num_conta;

		/** Armazena o saldo da conta */
		double saldo;

		/** Nome do correntista */
		string nome;

		Conta* c_corrente[1];

	};

}
 
#endif
