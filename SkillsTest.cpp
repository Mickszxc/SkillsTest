#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	setprecision(2);
	double inc, time, tax;
	tax = .14;

	cout << "Your pay rate for an hour: ";
	cin >> inc;
	cout << "\n";
	cout << "Number of hours you worked each week: ";
	cin >> time;
	cout << "\n";

	cout << "Your income before taxes from your summer job: " << inc * time  * 5 << endl;
	cout << "Your income after taxes from your summer job: " << inc * time * 5 * tax << endl;
	cout << "The money you spend on clothes and other accessories: " << inc * time * 5 * tax * .10 << endl;
	cout << "The money you spend on school supplies : " << inc * time * 5 * tax * .1 << endl;
	cout << "The money you spend to buy saving bonds: " << (inc * time * 5 * tax * .10 ) - (inc * time * 5 * tax * .1) * .25 << endl;
	cout << "The money your parents spend to buy additional savings bonds for you: " << (inc * time * 5 * tax * .10 ) - (inc * time * 5 * tax * .1) * .25 * .50 << endl;

	_getch();
	return 0;
} 
