using System;

public class Pessoa{

	public string nome;

	public Pessoa( string valor ){
		
		nome = valor;
	}

}

public class MainClass {

	static int Main( string[] args ) {
	
		foreach( string val in args ){
		
			Pessoa p1 = new Pessoa(val);
	
			Console.WriteLine(p1.nome);
	

		}
		
		unset(p1);

		return 0;
	}
}
