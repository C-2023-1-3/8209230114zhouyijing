#include<iostream>
using namespace std;
	void bubble(double bb[10])
	{
		bool changed = true;
		do
		{
			changed = false;
			for(int j=0;j<10-1;j++)
			{
					if (bb[j] > bb[j + 1])
					{
						double temp=bb[j];
						bb[j] = bb[j + 1];
						bb[j + 1] = temp;
						changed = true;
					}
			}
		} while (changed==true);
	}
	int main()
	{
		const int MaxN = 10;
		double a[MaxN];int n;
	    for (n = 0; n < MaxN; n++)
	    {
		  cin >> a[n];
	    }
		 bubble (a);
		for(int k=0;k<n;k++)
		{
			cout << a[k] << " ";
		}
		return 0;
	}