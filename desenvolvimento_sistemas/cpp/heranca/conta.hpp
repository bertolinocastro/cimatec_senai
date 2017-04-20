class Conta{
private:
	int numConta;
	int saldo;

protected:

	void NumConta(int); // setter
	int NumConta(void); // getter
	
	void Saldo(float);	// setter
	float Saldo(void);	// getter

public:
	// Virtuals
	virtual	void Depositar(float);
	virtual void Sacar(float);

	// Non-virtuals
	Conta(int,float);
	~Conta(void);
};

class ContaPoupanca : public Conta{
private:
protected:
public:
	
	void Despositar(float);
	void Sacar(float);

};

class ContaCorrente : public Conta{
private:
protected:
public:
	
	void Despositar(float);
	void Sacar(float);

};
