#include <iostream>
#include <string>

using namespace std;

class Animal{
private:

	string nome;
	int altura;
	int idade;

public:
	
	string 	Nome	(void);
	void 	Nome	(string);

	
	int 	Altura	(void);
	void 	Altura	(int);
	
	int 	Idade	(void);
	void 	Idade	(int);

	virtual	string 	som 	(void);
};

string Animal::Nome(void){
	return this->nome;
}

void Animal::Nome(string nome){
	this->nome = nome;
}

string Animal::som(void){
	return "Eu falo";
}

class Mamifero : public Animal{
private:
protected:
public:
	string 	som	(void);		
};

string Mamifero::som(void){
	return "Au ";
}

int main(int argc, char **argv){

	Animal animal1;

	animal1.Nome( "Abigobaldo" );

	cout << animal1.Nome() << endl;
	cout << animal1.som()	<< endl;

	/* ------ */


	Mamifero cachorro;

	cachorro.Nome( "Tequila" );

	cout << cachorro.Nome() << endl;
	cout << cachorro.som()	<< endl;

//	delete animal1;

	return 0;
}
