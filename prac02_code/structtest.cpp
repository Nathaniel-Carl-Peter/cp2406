#include <iostream>
#include <format>
#include "employee.cppm"


using namespace std;


int main()
{
	// create and populate an employee
	employee::Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	anEmployee.title = employee::Manager;

	// output the values of an employee
	cout <<"Employee: " << anEmployee.firstInitial << 
		anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;
	cout <<anEmployee.title<< endl;

	if (anEmployee.title == employee::Manager)
	{
		cout << "Manager"<<endl;
	}
	
}