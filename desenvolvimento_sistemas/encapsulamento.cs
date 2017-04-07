using System;

namespace Encapsulamento{

	public class Encapsular{


	
		private string titular;



		public double saldo = 1000.0;
		protected double saldo1 = 1000.0;
		private double saldo2 = 1000.0;

		public double ConsultarSaldo(  ) {
			return this.saldo;
		}

		public bool Sacar( double valor ){
			if( this.saldo - valor < 0 )
				return false;
			else
			{
				this.saldo -= valor;
				return true;
			}
		}	


		public string GetTitular(){
			return this.titular;
		}
	
		public void SetTitular(string val){
			this.titular = val;
		}

		public int NumeroConta { get; set; }
	}

	public class ExecuteEncapsular{
		static void Main(string[] args){
			
			Encapsular pessoa1;
			pessoa1 = new Encapsular();
			

			Console.WriteLine( "Usuario com saldo atual: "+Convert.ToString( pessoa1.ConsultarSaldo() ) ); 	

			pessoa1.Sacar( 400.0 );

			Console.WriteLine( "Usuario com saldo atual: "+Convert.ToString( pessoa1.ConsultarSaldo() ) ); 	


//			pessoa1.saldo1 += 50;


//			Console.WriteLine( "Usuario com saldo atual: "+Convert.ToString( pessoa1.saldo1 ) ); 	
//			pessoa1.saldo2 += 200;
//

//			Console.WriteLine( "Usuario com saldo atual: "+Convert.ToString( pessoa1.saldo2 ) ); 	
		
			pessoa1.SetTitular( "Abigobaldo" );
	
			Console.WriteLine( "Usuario chamado: "+ pessoa1.GetTitular() ); 	
		
		}
	}
}

