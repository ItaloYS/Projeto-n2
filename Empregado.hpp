#include "Pessoa.hpp"

#pragma once
class Empregado : public Pessoa
{
protected:
	//o Empregado recebe as var da classe Pessoa
	int _codigoSetor;
	float _salarioBase;
	float _imposto;

public:
	//Respectivos Getters e Setters e Setup inicial
	Empregado();
	void SetupEmpregado(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float imposto);
	int GetCodSetor();
	void SetCodSetor(int codSetor);
	float GetSalarioBase();
	void SetSalarioBase(float salario);
	float GetImposto();
	void SetImposto(float imposto);
	float CalcularSalario();
};