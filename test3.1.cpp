#include<iostream>
using namespace std;
int a, b;
int gongyueshu(int a, int b)
{
	int c = a, d = b;
	while (b != 0)
	{
		int c = max(a, b) % min(a, b);
		a = b;
		b = c;
	}
	cout << "���Լ��Ϊ��" << a << endl;
	cout << "��С������Ϊ��" << c * d / a << endl;
	return 0;
}
int main()
{
	cout << "��������������" << endl;
	cin >> a >> b;
	gongyueshu(a, b);
}