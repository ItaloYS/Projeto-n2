#include "Empregado.hpp"

Empregado::Empregado(){}

void Empregado::SetupEmpregado(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float imposto) {
	_nome = nome;
	_endereco = endereco;
	_telefone = telefone;
	_codigoSetor = codigoSetor;
	_salarioBase = salarioBase;
	_imposto = imposto;
}

int Empregado::GetCodSetor() {
	return _codigoSetor;
}

void Empregado::SetCodSetor(int codSetor) {
	_codigoSetor = codSetor;
}

float Empregado::GetSalarioBase() {
	return _salarioBase;
}

void Empregado::SetSalarioBase(float salarioBase) {
	_salarioBase = salarioBase;
}

float Empregado::GetImposto() {
	return _imposto;
}

void Empregado::SetImposto(float imposto) {
	_imposto = imposto;
}

float Empregado::CalcularSalario() {
	float liquido = _salarioBase * (1.0 - _imposto);
	return liquido;
}
