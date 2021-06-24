#include "Administrador.hpp"

Administrador::Administrador(){}

void Administrador::SetupAdministrador(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float ajudaDeCusto, float imposto) {
	SetupEmpregado(nome, endereco, telefone, codigoSetor, salarioBase, imposto);
	_ajudaDeCusto = ajudaDeCusto;
}

float Administrador::GetAjudaDeCusto() {
	return _ajudaDeCusto;
}

void Administrador::SetAjudaDeCusto(float ajudaDeCusto) {
	_ajudaDeCusto = ajudaDeCusto;
}

float Administrador::CalcularSalario() {
	float liquido = (_salarioBase * (1.0 - _imposto)) + _ajudaDeCusto;
	return liquido;
}
