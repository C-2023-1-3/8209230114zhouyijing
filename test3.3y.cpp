#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main()
{
	double cel = 40.0, fah = 120.0;
	cout << setw(15) << "Celsius";
	cout << setw(15) << "Fahrenheit";
	cout << " " << "|" << " "  ;
	cout << setw(15) << "Fahrenheit";
	cout << setw(15) << "Celsius" << endl;
	for(int i=1;i<=10;i++)
	{
		cout << fixed << setprecision(1) << setw(15) << cel;
		celsius_to_fah(cel);
		cout << fixed << setprecision(2) << setw(15) << fah;
		fahrenheit_to_cels(fah);
		cout << endl;
		cel--;
		fah -= 10;
	}
	return 0;
}