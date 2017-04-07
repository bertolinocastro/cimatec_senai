using System;
using String;

class Main {

	class Pessoa{
	
		public String nome;	

		public String mudarNome();

		public Pessoa( String valor ){
			
			set{
				this.nome = valor;
			}		
	
		}
	
	}



	public main() {

		Pessoa p1 = new Pessoa;

		Console.Write(p1.nome);



	}
}
