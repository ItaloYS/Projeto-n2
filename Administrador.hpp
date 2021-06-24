#include "Empregado.hpp"

#pragma once
class Administrador : public Empregado
{
private:
	//A classe Administrador herda as variaveis e métodos da classe Empregado e gera mais um atributo próprio
	float _ajudaDeCusto;

public:
	//Respectivos Getters e Setters,um Setup inicial e redefinição do método CalcularSalario da classe Empregado
	Administrador();
	void SetupAdministrador(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float ajudaDeCusto, float imposto);
	float GetAjudaDeCusto();
	void SetAjudaDeCusto(float ajudaDeCusto);
	float CalcularSalario();
};

