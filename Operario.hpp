#include "Empregado.hpp"

#pragma once
class Operario : public Empregado
{
private:
	//A classe Operario herda as variaveis e métodos da classe Empregado e gera mais dois atributos próprio
	float _valorDeProducao;
	float _comissao;

public:
	//Respectivos Getters e Setters,um Setup inicial e redefinição do método CalcularSalario da classe Empregado
	Operario();
	void SetupOperario(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float valorDeProducao, float comissao, float imposto);
	void SetValorProducao(float valorDeProducao);
	float GetValorProducao();
	void SetComissao(float comissao);
	float GetComissao();
	float CalcularSalario();
};

