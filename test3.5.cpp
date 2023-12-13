#include<iostream>
using namespace std;
int peach(int day)
{
	int n;
	if(day==10)
	{
		n = 1;
	}
	else
	{
		n = (peach(day + 1) + 1) * 2;
	}
	return n;
}
int main()
{
	int day = 1;
	cout << peach(day) << endl;
}