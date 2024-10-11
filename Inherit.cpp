/*#include<iostream>

using namespace std;

class Employee
{
protected:
	string name;
	int employeeID;
public:
	Employee()
	{	cout<<"Enter Name of the employee ";
		cin>>name;
		cout<<"Enter employee ID ";
		cin>>employeeID;
//		this ->name = name;
//		this ->employeeID = employeeID;
	}
	displayDetails()
	{
		cout<<"Name :"<<name<<endl<<"Employee ID:"<<employeeID<<endl;
	}
};

class Manager : public Employee
{
	string department;
	
public :
	Manager()
	{
		Employee();
		cout<<"Enter the Department ";
		cin>>department;
//		this -> name = name;
//		this -> employeeID = employeeID;
//		this -> department = department;
	}	
	displayDetails()
	{
		displayDetails();
		cout<<"Department:"<<department<<endl;
	}
};
class Developer : public Employee
{
	string 	programmingLanguage;
	
public:
	
	Developer()
	{
		Employee();
		cout<<"Enter programming Language ";
		cin>>programmingLanguage;
//		this -> name = name;
//		this -> employeeID = employeeID;
//		this -> programmingLanguage = programmingLanguage;
	}

	displayDetails()
	{
		displayDetails();
		cout<<"Programming language:"<<programmingLanguage<<endl;
	}
};
class Intern : public Employee
{
	
	string mentor;
public:
	
		Intern()
		{
			Employee();
			cout<<"Enter the Mentor assigned to the mentor ";
			cin>>mentor;
//			this -> name = name;
//			this -> employeeID = employeeID;
//			this -> mentor = mentor;
		}
		
		displayDetails()
		{
			displayDetails();
			cout<<"Mentor :"<<mentor<<endl;
		}
		
};

int main()
{
	Manager m1;
	Developer d1;
	Intern M1;
	
	
//	m1.displayDetails();
//	d1.displayDetails();
//	M1.displayDetails();	
	
}
*/


#include <iostream>
#include <string>
using namespace std;


class Employee {
protected:
    string name;
    int employeeID;

public:
    // Constructor to initialize name and employeeID
    Employee(string empName, int empID) : name(empName), employeeID(empID) {}

    // Method to display common details (name and employeeID)
    void displayDetails() {
        cout << "Name: " << name << "\nEmployee ID: " << employeeID << endl;
    }
};

// Derived Class 1: Manager (inherits from Employee)
class Manager : public Employee {
	
private:
    string department;

public:
    // Constructor to initialize name, employeeID, and department
    Manager(string empName, int empID, string dept) 
        : Employee(empName, empID), department(dept) {}

    // Method specific to Manager to display department
    void displayManagerDetails() {
        displayDetails();  // Call base class method to display common details
        cout << "Department: " << department << endl;
    }
};

// Derived Class 2: Developer (inherits from Employee)
class Developer : public Employee {
	
private:
    string programmingLanguage;

public:
    // Constructor to initialize name, employeeID, and programmingLanguage
    Developer(string empName, int empID, string progLang) 
        : Employee(empName, empID), programmingLanguage(progLang) {}

    // Method specific to Developer to display programming language
    void displayDeveloperDetails() {
        displayDetails();  // Call base class method to display common details
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

// Derived Class 3: Intern (inherits from Employee)
class Intern : public Employee {
private:
    string mentor;

public:
    // Constructor to initialize name, employeeID, and mentor
    Intern(string empName, int empID, string ment) 
        : Employee(empName, empID), mentor(ment) {}

    // Method specific to Intern to display mentor's name
    void displayInternDetails() {
        displayDetails();  // Call base class method to display common details
        cout << "Mentor: " << mentor << endl;
    }
};

// Main function to demonstrate the classes
int main() {
    Manager mgr("Alice", 101, "HR");
    Developer dev("Bob", 102, "C++");
    Intern intern("Charlie", 103, "Alice");

    cout << "Manager Details:\n";
    mgr.displayManagerDetails();

    cout << "\nDeveloper Details:\n";
    dev.displayDeveloperDetails();

    cout << "\nIntern Details:\n";
    intern.displayInternDetails();

    return 0;
}

