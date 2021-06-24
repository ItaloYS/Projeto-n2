#include "Vendedor.hpp"

Vendedor::Vendedor(){}

void Vendedor::SetupVendedor(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float valorVendas, float comissao, float imposto) {
	SetupEmpregado(nome, endereco, telefone, codigoSetor, salarioBase, imposto);
	_valorVendas = valorVendas;
	_comissao = _valorVendas * comissao;
}

void Vendedor::SetValorVendas(float valorVendas) {
	_valorVendas = valorVendas;
}

float Vendedor::GetValorVendas() {
	return _valorVendas;
}

void Vendedor::SetComissao(float comissao) {
	_comissao = comissao;
}

float Vendedor::GetComissao() {
	return _comissao;
}

float Vendedor::CalcularSalario() {
	float liquido = _salarioBase * (1.0 - _imposto) + _comissao;
	return liquido;
}
