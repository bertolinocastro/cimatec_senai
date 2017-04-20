#include "conta.hpp"
#include <iostream>
using namespace std;


Conta::Conta(int numConta, float saldo){
	this->NumConta(numConta);
	this->Saldo(saldo);
}

Conta::~Conta(void){
	cout<<"Oi! Eu:"<<this->NumConta()<<" com "<<this->Saldo()<<" Morri!"<<endl;
}

// getters e setters
void Conta::NumConta(int numConta){
	this->numConta = numConta;
}

int Conta::NumConta(void){
	return this->numConta;
}

void Conta::Saldo(float saldo){
	this->saldo = saldo;
}

float Conta::Saldo(void){
	return this->saldo;
}

// methods

void Conta::Depositar(float money){
	this->Saldo(this->Saldo() + money);
}

void Conta::Sacar(float money){
	if(this->Saldo() >= money)
		this->Saldo(this->Saldo() - money);
}




/* ContaPoupanca */
void ContaPoupanca::Depositar(float money){
	this->Saldo( this->Saldo() + money + 0.02 );
}

/* ContaCorrente */
void ContaCorrente::Sacar(float money){
	if(this->Saldo() >= money)
		this->Saldo( this->Saldo() - money - 0.1 );
}









// programa



int main(int argc, char **argv){

	ContaCorrente pessoa1(123, 1000);
	
	ContaPoupanca pessoa2(321, 1000);


	cout << "Sou a pessoa1:" <<pessoa1.NumConta() << " " << pessoa1.Saldo() << endl;		

	cout<<"Sou a pessoa2:"<<pessoa2.NumConta()<<""<<pessoa2.Saldo()<<endl;		

	pessoa1.Depositar(500);
	pessoa2.Depositar(500);


	cout<<"Sou a pessoa1:"<<pessoa1.NumConta()<<""<<pessoa1.Saldo()<<endl;		

	cout<<"Sou a pessoa2:"<<pessoa2.NumConta()<<""<<pessoa2.Saldo()<<endl;		

	pessoa1.Sacar(600);
	pessoa2.Sacar(600);
	
	cout<<"Sou a pessoa1:"<<pessoa1.NumConta()<<""<<pessoa1.Saldo()<<endl;		

	cout<<"Sou a pessoa2:"<<pessoa2.NumConta()<<""<<pessoa2.Saldo()<<endl;		

	return 0;	
}


