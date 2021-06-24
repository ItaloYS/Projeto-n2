#include "Operario.hpp"

Operario::Operario(){}

void Operario::SetupOperario(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float valorDeProducao, float comissao, float imposto) {
	SetupEmpregado(nome, endereco, telefone, codigoSetor, salarioBase, imposto);
	_valorDeProducao = valorDeProducao;
	_comissao = _valorDeProducao * comissao;
}

void Operario::SetValorProducao(float valorDeProducao) {
	_valorDeProducao = valorDeProducao;
}

float Operario::GetValorProducao() {
	return _valorDeProducao;
}

void Operario::SetComissao(float comissao) {
	_comissao = comissao;
}

float Operario::GetComissao() {
	return _comissao;
}

float Operario::CalcularSalario() {
	float liquido = (_salarioBase * (1.0 - _imposto)) + _comissao;
	return liquido;
}
