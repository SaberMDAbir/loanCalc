#include <iostream>

using namespace std;

int main() 
{
	//Purpose: 
	//		compute monthly payment amount for a loan
	//Input:
	//		L: total loan amount
	//		r: the monthly interest rate
	//		N: payment period in months
	// Output:
	//		M: required monthly payment

	//INPUT
	double L;
	cout << "Enter Loan Amount:";
	cin >> L;

	double r;
	cout << "Enter Montly Interest Rate: ";
	cin >> r;

	double N;
	cout << "Enter pament period (in months): ";
	cin >> N;

	//PROCESSING
	double M;
	M = L / ((1 - 1 / pow(1 + r, N)) / r);

	//OUTPUT
	cout << "Your monthly payment is " << M << endl;

	system("Pause");
	return 0;
}