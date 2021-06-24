#include "Empregado.hpp"

#pragma once
class Vendedor:public Empregado
{
private :
	//A classe Vendedor herda as variaveis e m�todos da classe Empregado e gera mais dois atributos pr�prio
	float _valorVendas;
	float _comissao;

public:
	//Respectivos Getters e Setters, um Setup inicial e redefini��o do m�todo CalcularSalario da classe Empregado
	Vendedor();
	void SetupVendedor(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float valorVendas, float comissao, float imposto);
	void SetValorVendas(float valorVendas);
	float GetValorVendas();
	void SetComissao(float comissao);
	float GetComissao();
	float CalcularSalario();
};

