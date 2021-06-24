#include "Empregado.hpp"

#pragma once
class Administrador : public Empregado
{
private:
	//A classe Administrador herda as variaveis e m�todos da classe Empregado e gera mais um atributo pr�prio
	float _ajudaDeCusto;

public:
	//Respectivos Getters e Setters,um Setup inicial e redefini��o do m�todo CalcularSalario da classe Empregado
	Administrador();
	void SetupAdministrador(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float ajudaDeCusto, float imposto);
	float GetAjudaDeCusto();
	void SetAjudaDeCusto(float ajudaDeCusto);
	float CalcularSalario();
};

