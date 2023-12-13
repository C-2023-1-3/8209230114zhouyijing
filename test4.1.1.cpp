#include<iostream>
using namespace std;
int main()
{
	const int MaxN = 10;
	int a[MaxN], n;
	for(n = 0;n<MaxN;n++)
	{
		cin >> a[n];
	}
	cout << a[0]<<" ";
    for (int j = 1; j < MaxN; j++)
	{
		for (int i = 0; i < j; i++)
		{
			if (a[j] != a[i])
			{
				if (i == j - 1)
				{
					cout << a[j]<<" ";
				}
			}
			else { break; }
		}
	}
	return 0;
}