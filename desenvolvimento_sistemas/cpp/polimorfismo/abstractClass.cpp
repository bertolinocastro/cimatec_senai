#include <iostream>

class classeAbstrata{

	public:
		virtual void mia() =0;

};

class classeFilha : public classeAbstrata {
	public:
		void mia(){ std::cout << "MEAWTH" << std::endl; }	
};

int main(void){
	using namespace std;

	classeAbstrata gatinho1;
	classeAbstrata gatinho2 = classeFilha();

	
	

	return 0;
}
