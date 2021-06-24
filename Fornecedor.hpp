#include "Pessoa.hpp"

#pragma once
class Fornecedor : public Pessoa
{
	//O fornecedor recebe as variaveis da classe Pessoa e adiciona as suas proprias var
private:
	float _valorCredito;
	float _valorDivida;
	
public:
	//Getters e Setters das var novas do Fornecedor e um Setup inicial
	Fornecedor();
	void SetupFornecedor(string nome, string endereco, string telefone, float credito, float divida);
	float GetCredito();
	void SetCredito(float credito);
	float GetDivida();
	void SetDivida(float debito);
	float ObterSaldo();
};

