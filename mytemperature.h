#pragma once
using namespace std;
double celsius_to_fah(double cel)
{
	double fah;
	fah = 32.0 + cel * 1.8;
	cout << fixed << setprecision(1) << setw(15) << fah;
	return fah;
}
double fahrenheit_to_cels(double fah)
{
	double cel;
	cel =(fah - 32.0) / 1.8;
	cout << fixed << setprecision(2) << setw(15) << cel;
	return cel;
}