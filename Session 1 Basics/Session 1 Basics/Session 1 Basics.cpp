
#include <iostream>
using namespace std;
// Exercises 1-4
void ExerciseOneToFour()
{
	string name;
	int age = 10;
	const int daysInYear = 365;

	int* pAge = 0;
	pAge = &age;

	cout << "Address pAge points at: " << pAge << endl << "Value pointed at by pAge: " << *pAge << endl << "Value of age: " << age << endl;

	age = 19;
	int& rAge = age;
	cout << "Reference of age: " << rAge << endl << "Age: " << age << endl;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Your name is " << name << " and you're " << age << " years old!" << endl;
	cout << "You are " << age * daysInYear << " days old!" << endl;
}

// Exercise 5
int FirstJobSalary = 20000;
int SecondJobSalary = 15000;

void ExerciseFive()
{
	cout << "Salary from first job: " << FirstJobSalary << endl << "Salary from second job: " << SecondJobSalary << endl;
}

int main()
{
	//ExerciseOneToFour();
	//ExerciseFive();
}