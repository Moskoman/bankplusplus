#include <iostream>
#include "Account.h"
using namespace std;

	//Constructor
	Account::Account(string name, double initialBalance = 0){
		setOwner(name);
		setInicialBalance(initialBalance);
	}

	//Sets and Gets
	void Account::setOwner (string name){
		owner = name;
	}

	string Account::getOwner (){
		return owner;
	}

	void Account::setInicialBalance (double value){
		if (value >= 0) {
			balance = value;
		}
		else balance = 0;
	}

	double Account::getBalance (){
		return balance;
	}

	//Operations
	void Account::withdraw (double amount){
		if (amount > 0 && amount <= balance){
			balance -= amount;
		}
	}

	void Account::deposit (double amount){
		if (amount > 0){
			balance += amount;
		}
	}