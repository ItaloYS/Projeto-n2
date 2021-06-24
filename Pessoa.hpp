#ifndef Pessoa_hpp
#define Pessoa_hpp
#include <iostream>
using namespace std;


class Pessoa
{
protected:
	//vari�veis b�sicas de pessoas 
	string _nome;
	string _endereco;
	string _telefone;

public:
	//aqui tem os getters e setters basicos para cada variavel com um construtor b�sico
	Pessoa();
	Pessoa(string nome, string endereco, string telefone);
	void SetNome(string nome);
	string GetNome();
	void SetEndereco(string endereco);
	string GetEndereco();
	void SetTelefone(string telefone);
	string GetTelefone();
};


#endif // !1