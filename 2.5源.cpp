#include<iostream>
#include<cctype>//���ַ���صĺ����⣬ȷ���ַ���Сд�����ֱ�����
#include<stdio.h>//��׼�������
using namespace std;
int main()
{
	int nchar = 0, nnum = 0, nblank = 0, nelse = 0;
	char c;
	while((c = getchar()) != '\n')
	{
		if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
	    {
		    nchar++;
	    }
		else if(c>='0'&&c<='9')
		{
			nnum++;
		}
		else if(c==' ')
		{
			nblank++;
		}
		else
		{
			nelse++;
		}
	}
	cout << "nchar:" << nchar << endl;
	cout << "nnum:" << nnum << endl;
	cout << "nblank:" << nblank << endl;
	cout << "nelse:" << nelse << endl;
	return 0;
}