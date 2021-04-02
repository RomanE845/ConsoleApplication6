// task 4
#include <iostream>
#include <fstream>
using namespace std;

void StrEmp() {
#pragma pack(push ,1)
	struct Employee
	{
		string name;
		short int age;
		int id_number;
		double salary;
	};

#pragma pack(pop)
	Employee* strEmp = new Employee;

	strEmp->name = "Jhonny";
	strEmp->age = 36;
	strEmp->id_number = 52'36'54;
	strEmp->salary = 89'235.00;

	cout << "Name: " << strEmp->name << "\n";
	cout << "Age: " << strEmp->age << "\n";
	cout << "ID: " << strEmp->id_number << "\n";
	cout << "Salary: " << strEmp->salary << "\n";
	cout << "Size of struct : " << sizeof(strEmp) << endl;

	ofstream fout("Struct.txt");
	fout << "Name: " << strEmp->name << "\n";
	fout << "Age: " << strEmp->age << "\n";
	fout << "ID: " << strEmp->id_number << "\n";
	fout << "Salary: " << strEmp->salary << "\n";
	fout.close();

	delete strEmp;
}