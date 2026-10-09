#include <time.h>
#include <iostream>
#include "MyVars.h"
using namespace std;


const int DAYS_IN_YEAR = 365;


// Exercises 1-4
void ExerciseOneToFour()
{
	string name;
	int age = 10;
	
	int* pAge = 0;
	pAge = &age;

	cout << "Address pAge points at: " << pAge << endl << "Value pointed at by pAge: " << *pAge << endl << "Value of age: " << age << endl;

	int& rAge = age;
	age = 19;
	
	cout << "Reference of age: " << rAge << endl << "Age: " << age << endl;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Your name is " << name << " and you're " << age << " years old!" << endl;
	cout << "You are " << age * DAYS_IN_YEAR << " days old!" << endl;
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

	cout << "Number of letters in surname: " << surname.length() << endl;

	cout << "First letter of the surname: " << surname[0] << endl;
	cout << "Last letter of the surname: " << surname[5] << endl;

	__time32_t rawtime;
	struct tm timeinfo;
	char buffer[32];
	_time32(&rawtime);
	_localtime32_s(&timeinfo, &rawtime);
	asctime_s(buffer, 32, &timeinfo);
	
	cout << "\nThe current time is " << buffer << endl;
	cout << "Seconds elapsed since 01/01/1970: " << rawtime << endl;
	cout << "Current time separated into hours / minutes / seconds: " << endl << "Hours: " << timeinfo.tm_hour << endl << "Minutes: " << timeinfo.tm_min << endl << "Seconds: " << timeinfo.tm_sec << endl;

}
