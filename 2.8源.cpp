#include<iostream>
using namespace std;
int main()
{
	float a, xn, xm;
	cout << "������һ����a" << endl;
	cin >> a;
	if(a<0)
	{
		cout << "error" << endl;
	}
	else
	{
		xm = a;
		xn = (xm + a / xm) / 2;
		while(fabs(xm-xn)<=0.00001)
		{
			xn = xm;
			xm = (xn + a / xn) / 2;
		}
		cout << "a��ƽ����Ϊ��" << xm << endl;
	}
}