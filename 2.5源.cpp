#include<iostream>
#include<cctype>//与字符相关的函数库，确定字符大小写，数字标点符号
#include<stdio.h>//标准输入输出
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