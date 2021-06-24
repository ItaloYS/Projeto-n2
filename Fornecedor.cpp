#include "Fornecedor.hpp"

Fornecedor::Fornecedor(){ }

void Fornecedor::SetupFornecedor(string nome, string endereco, string telefone, float credito, float divida) {
	_nome = nome;
	_endereco = endereco;
	_telefone = telefone;
	_valorCredito = credito;
	_valorDivida = divida;
}

float Fornecedor::GetCredito() {
	return _valorCredito;
}

void Fornecedor::SetCredito(float credito) {
	_valorCredito = credito;
}

float Fornecedor::GetDivida() {
	return _valorDivida;
}

void Fornecedor::SetDivida(float divida) {
	_valorDivida = divida;
}

float Fornecedor::ObterSaldo() {
	float saldo = _valorCredito - _valorDivida;
	return saldo;
}
