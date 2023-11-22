#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "please input a chraracter:a" << endl;
	cin >> a;
	if(a>='a'&&a<='z')
	{
		a -= 32;
		cout << a << endl;
	}
	else if(a>='A'&&a<='Z')
	{
		a += 1;
		cout << static_cast<int>(a) << endl;
	}
}