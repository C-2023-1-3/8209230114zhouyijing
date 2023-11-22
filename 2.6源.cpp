#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	int c = a, d = b;
	while(b!=0)
	{
		int c = max(a, b)%min(a, b);
		a = b;
		b = c;
	}
    cout << "最大公约数为：" << a << endl;
	cout << "最小公倍数为：" << c * d / a << endl;
}