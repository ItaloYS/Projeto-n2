#include "Empregado.hpp"

#pragma once
class Operario : public Empregado
{
private:
	//A classe Operario herda as variaveis e m�todos da classe Empregado e gera mais dois atributos pr�prio
	float _valorDeProducao;
	float _comissao;

public:
	//Respectivos Getters e Setters,um Setup inicial e redefini��o do m�todo CalcularSalario da classe Empregado
	Operario();
	void SetupOperario(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float valorDeProducao, float comissao, float imposto);
	void SetValorProducao(float valorDeProducao);
	float GetValorProducao();
	void SetComissao(float comissao);
	float GetComissao();
	float CalcularSalario();
};

