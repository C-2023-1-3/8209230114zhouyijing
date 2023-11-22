#include<iostream>
using namespace std;
int main()
{
	float sum=1.6;
	int i = 2;
	for(;pow(2,i+1)-2<=100;i++)
	{
		sum = sum + pow(2, i) * 0.8;
	}
	cout << sum /(i-1)<< endl;
}