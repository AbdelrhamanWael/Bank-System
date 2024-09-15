#include <iostream>
#include <string>
#include "Bank System.h"
using namespace std;

int main() {
	Client k("youssefah", "1234567890", 1245, 2000);
	Client c;
	k.Display();
	k.deposit(2000);
	k.withdraw(1000);
	k.transferTo(1500, c);
	k.checkBalance();

//-----------------------------------

	Employee e;
	e.setId(1);
	e.setName("John Doe");
	e.setPassword("password123");
	e.setSalary(6000);
	e.display();



}

