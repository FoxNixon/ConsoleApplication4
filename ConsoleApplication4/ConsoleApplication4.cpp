// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	
	int a=0, b=0, summ, minLimit, maxLimit;
	minLimit = 10;
	maxLimit = 20;
	int length = 50;

goto task5;

task1:	//Task1
		cout << "Enter first number" << endl;
		cin >> a;
		cout << "Enter second number" << endl;
		cin >> b;

		summ = a + b;

		if (summ >= minLimit && summ <= maxLimit) {
			cout << "Task 1: True" << endl;
		}
		else {
			cout << "Task 1: False" << endl;
		}
	
		cout << endl;

		// Task 2
		if (a ==minLimit || b == minLimit || summ == minLimit) {
			cout << "Task 2: True" << endl;
		}
		else {
			cout << "Task 2: False" << endl;
		}
	
		cout << endl;

task3:	// Task 3
		cout << "Task 3: Your numbers: ";
		for (size_t i = 1; i < length; i++)
		{
			if (i % 2 == 1) {
				cout << i << " ";
			}
		}
		cout << endl;
		cout << endl;

task4:	// Task 4
		unsigned int nSimpleCandidate, counter, result;
		counter = 0;
		cout << "Task 4: Enter positive number" << endl;
		cin >> nSimpleCandidate;

		for (size_t i = 1; i < nSimpleCandidate+1; i++)
		{
			if (nSimpleCandidate % i == 0) {
				counter++;
			}
			if (counter > 2) {
				cout << "Not a simple number!" << endl;
				break;
			}

		}
		if (counter < 3) {
			cout << "You entered simple Number!!" << endl;
		}

		cout << endl;
	
task5:	// Task 5
		int year = 0;
		cout << "Enter year number (1...3000)" << endl;
		cin >> year;
		string sConfirm, sDeny;
		sConfirm = " is a leap-year";
		sDeny = " is not a leap-year";


		if (year % 4 == 0) {

			if (year % 100 == 0){
			
				if (year % 400 == 0) {
					cout << year << sConfirm << endl;
					goto finish;
				}
				else {
					cout << year << sDeny << endl;
					goto finish;
				}
			}
			else {
				cout << year << sConfirm << endl;
			}
		}
		else {
			cout << year << sDeny << endl;
		}
finish:

	return 0;

}
