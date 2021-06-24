#include "Pessoa.hpp"

Pessoa::Pessoa(){ }

Pessoa::Pessoa(string nome, string endereco, string telefone) {
	_nome = nome;
	_endereco = endereco;
	_telefone = telefone;
}


void Pessoa::SetNome(string nome) {
	_nome = nome;
}

string Pessoa::GetNome() {
	return _nome;
}

void Pessoa::SetEndereco(string endereco) {
	_endereco = endereco;
}

string Pessoa::GetEndereco() {
	return _endereco;
}

void Pessoa::SetTelefone(string telefone) {
	_telefone = telefone;
}

string Pessoa::GetTelefone() {
	return _telefone;
}
