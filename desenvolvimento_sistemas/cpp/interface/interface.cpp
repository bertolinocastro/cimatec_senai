#include <iostream>

class IAutentica {
public:
	std::string nome;
	int senha;
	virtual	void ExibirSenha( void ) = 0;

};

class Gerente : public IAutentica {
public:
	void ExibirSenha(void){ std::cout << this->senha << std::endl; }


};

class Empresa : public IAutentica {
public:
	void ExibirSenha(void){ std::cout << this->senha << std::endl; }
};

class Autenticar{
public:
	void Logar(IAutentica i) { std::cout << i.nome << " logado!" << std::endl; }
};

int main(void){

	Gerente ger1();
	Empresa emp1();

	ger1.nome = "Lava jato ltda";
	ger1.senha = 123456;
	
	emp1.nome = "Abigobaldo";
	emp1.senha = 123456;

	ger1.ExibirSenha();
	emp1.ExibirSenha();
	
	Autenticar auth();

	auth.Logar(ger1);
	auth.Logar(emp1);

	return 0;
}
