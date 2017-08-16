#include <iostream>
#include "Account.h"
#include <string>
using namespace std;

int main () {

	Account C1 ("aaaaaaa", 30);
	cout << C1.getOwner() << "\n" << C1.getBalance() << "\n";
	C1.deposit (-40);
	cout << C1.getBalance() << "\n";

}