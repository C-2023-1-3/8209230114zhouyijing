#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "输入华氏温度" << endl;
	cin >> a;
	b = (a - 273.15);
	cout << "对应的摄氏温度为：" <<setprecision(2)<< b <<"℃" << endl;
	return 0;
}