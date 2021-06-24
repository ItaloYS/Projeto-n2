#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include "list";

void TestFuncionario() {
	Fornecedor fornecedor;

	fornecedor.SetupFornecedor("Alfredo Godoy", "Rua Alberto de Castro, 361", "5132165498", 1000.0, 200.0);

	cout << "Nome:		" << fornecedor.GetNome() << endl
		<< "Endereco:	" << fornecedor.GetEndereco() << endl
		<< "Telefone:	" << fornecedor.GetTelefone() << endl
		<< "Credito:	RS " << fornecedor.GetCredito() << endl
		<< "Divida:		RS " << fornecedor.GetDivida() << endl
		<< "Saldo:		RS " << fornecedor.ObterSaldo() << endl << endl;
}

void TestEmpregado() {
	Empregado empregado;

	empregado.SetupEmpregado("Ednaldo Pereira", "Rua João Campos, 69", "5134561987", 12, 2000.0, 0.22);

	cout << "Nome:		" << empregado.GetNome() << endl
		<< "Endereco:	" << empregado.GetEndereco() << endl
		<< "Telefone:	" << empregado.GetTelefone() << endl
		<< "Setor:		" << empregado.GetCodSetor() << endl
		<< "Salario Bruto:	 RS " << empregado.GetSalarioBase() << endl
		<< "Salario Liquido: RS " << empregado.CalcularSalario() << endl << endl;
}

void TestAdministrador() {
	Administrador administrador;

	administrador.SetupAdministrador("Robson Brito", "Rua Humberto Paez, 24", "5137537951", 12, 2500.0, 600.0, 0.22);

	cout << "Nome:		" << administrador.GetNome() << endl
		<< "Endereco:	" << administrador.GetEndereco() << endl
		<< "Telefone:	" << administrador.GetTelefone() << endl
		<< "Setor:		" << administrador.GetCodSetor() << endl
		<< "Salario bruto:	 RS " << administrador.GetSalarioBase() << endl
		<< "Ajuda de custo:	 RS " << administrador.GetAjudaDeCusto() << endl
		<< "Salario liquido: RS " << administrador.CalcularSalario() << endl << endl;
}

void TestOperario() {
	Operario operario;

	operario.SetupOperario("Vagner Ross", "Rua Cleiton Mendes, 666", "5132156548", 10, 1300, 2000, 0.1, 0.22);

	cout << "Nome:		" << operario.GetNome() << endl
		<< "Endereco:	" << operario.GetEndereco() << endl
		<< "Telefone:	" << operario.GetTelefone() << endl
		<< "Setor:		" << operario.GetCodSetor() << endl
		<< "Salario bruto:		RS " << operario.GetSalarioBase() << endl
		<< "Valor de Producao:	RS " << operario.GetValorProducao() << endl
		<< "Salario liquido:	RS " << operario.CalcularSalario() << endl << endl;
}

void TestVendedor() {
	Vendedor vendedor;

	vendedor.SetupVendedor("Edson Costa", "Rua Jose do Patrocinio, 2424", "5134869426", 9, 1400, 2800, 0.16, 0.22);

	cout << "Nome:		" << vendedor.GetNome() << endl
		<< "Endereco:	" << vendedor.GetEndereco() << endl
		<< "Telefone:	" << vendedor.GetTelefone() << endl
		<< "Setor:		" << vendedor.GetCodSetor() << endl
		<< "Salario bruto:		RS " << vendedor.GetSalarioBase() << endl
		<< "Valor de Vendas:	RS " << vendedor.GetValorVendas() << endl
		<< "Salario liquido:	RS " << vendedor.CalcularSalario() << endl << endl;
}

void main() {
	//métodos para testar se cada classe está funcionando corretamente

	TestFuncionario();
	TestEmpregado();
	TestAdministrador();
	TestOperario();
	TestVendedor();
	
	system("pause");
}