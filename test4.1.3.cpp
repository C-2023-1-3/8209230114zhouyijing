#include<iostream>
using namespace std;
int main()
{
	const int MaxN = 100;
	bool state[MaxN];
	for(int i=0;i<MaxN;i++)
	{
		state[i] =false;
	}
	for (int j = 0; j < MaxN; j++)
	{
		for(int k=j;k<MaxN;k=k+j+1)
		{
			if(state[k]) 
			{
				state[k] = false;
			}
			else { state[k] = true; }
		}
	}
	for(int m=0;m<MaxN;m++)
	{
		if(state[m])
		{
			cout << (m + 1) << " ";
		}
	}
	return 0;
}