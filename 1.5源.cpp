#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "���뻪���¶�" << endl;
	cin >> a;
	b = (a - 273.15);
	cout << "��Ӧ�������¶�Ϊ��" <<setprecision(2)<< b <<"��" << endl;
	return 0;
}