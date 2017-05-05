#include <iostream>

class Animal{
	public:
		virtual void som() ;
};

class Cachorro : public Animal{
	public:
		void som(){std::cout << "Au au" << std::endl;}
};

class Gato : public Animal{
	public:
		void som(){std::cout << "Miau" << std::endl;}
};

int main(void){

	Animal 	dog = Cachorro(),
			cat = Gato();


	
	dog.som(); cat.som();

	return 0;
}



