#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cin >> a >> c >> b;
	if(c=='+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if(c=='-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if(c=='*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if(c=='/')
	{
		if (b == 0) { cout << "error"; }
		else { cout << a << "/" << b << "=" << a / b << endl; }
	}
	else if(c=='%')
	{
		
			cout << a << "%" << b <<"="<< (a % b) << endl;
		
	}
	else
	{
		cout << "运算符非法，算式不成立" << endl;
	}
}