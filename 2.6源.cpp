#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "��������������" << endl;
	cin >> a >> b;
	int c = a, d = b;
	while(b!=0)
	{
		int c = max(a, b)%min(a, b);
		a = b;
		b = c;
	}
    cout << "���Լ��Ϊ��" << a << endl;
	cout << "��С������Ϊ��" << c * d / a << endl;
}