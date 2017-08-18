#include <iostream>
#include <string>
using namespace std;

class Account
{
//constructor
public:
	Account(string name, double initialBalance);

	//Sets and Gets
	void setOwner (string name);
	string getOwner ();
	void setInicialBalance (double value);
	double getBalance ();

	//Operations
	void withdraw (double amount);
	void deposit (double amount);

private:
	string owner;
	double balance;
};