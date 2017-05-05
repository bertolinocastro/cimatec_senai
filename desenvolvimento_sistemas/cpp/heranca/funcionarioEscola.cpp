#include <stdio.h>
#include <iostream>

using namespace std;

class Funcionario{
	public:
		Funcionario( string, float );
		virtual float calcBonific( void );
		float Salario(){ return this->salario; }
		void  Salario( float x ){ this->salario = x; }
		string Nome(){ return this->nome; }
		void Nome(string x){ this->nome = x; }
	protected:
		string nome;
		float salario;
	private:
};

class Professor : public Funcionario {
	public:
		using Funcionario::Funcionario;
	protected:
	private:
		string disciplina;
};

class Secretaria : public Funcionario {
	public:
		using Funcionario::Funcionario;
	protected:
	private:
		int ramal;
};

class Diretor : public Funcionario {
	public:
		float calcBonific( void );
		using Funcionario::Funcionario;
	protected:
	protected:
	private:
		string nomeUser;
		string senha;
};

Funcionario::Funcionario( string name, float sal ){
	this->nome = name; this->salario = sal;
}

float Funcionario::calcBonific( void ){
	return this->salario*1.1;
}

float Diretor::calcBonific( void ){
	return this->salario*9000;
}









int main(int argc, char **argv){

	Professor 	professor1( "Abigobaldo", 600.0f );
	Diretor 	diretor1( "Eterobaldo", 3600.0f );
	Secretaria 	secretaria1( "Juriscleide", 450.0f );
	
	cout << "Oi, sou o prof. " << professor1.Nome() << " ganho " << professor1.Salario() << " aumento: " << professor1.calcBonific
() << endl;
	
			
	cout << "Oi, sou a secr. " << secretaria1.Nome() << " ganho " << secretaria1.Salario() << " aumento: " << secretaria1.calcBonific
() << endl;


	cout << "Oi, sou o dire. " << diretor1.Nome() << " ganho " << diretor1.Salario() << " aumento: " << diretor1.calcBonific
() << endl;


	return 0;
}
