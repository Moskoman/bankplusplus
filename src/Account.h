#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
	Account(string name, double initialBalance = 0){
		setOwner(name);
		setInicialBalance(initialBalance);
	}

	void setOwner (string name){
		owner = name;
	}

	string getOwner (){
		return owner;
	}

	void setInicialBalance (double value){
		if (value >= 0) {
			balance = value;
		}
		else balance = 0;
	}

	double getBalance (){
		return balance;
	}

	void withdraw (double amount){
		if (amount > 0 && amount <= balance){
			balance -= amount;
		}
	}

	void deposit (double amount){
		if (amount > 0){
			balance += amount;
		}
	}
private:
	string owner;
	double balance;
};