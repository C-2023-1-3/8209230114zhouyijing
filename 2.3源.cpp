#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	float a, b, c, d,x1,x2;
	cout << "�����������߳�" << endl;
	cin >> a >> b >> c;
	d = a + b + c;
	x1 = max(a, b);
	a = max(x1, c);//a�����
	x2 = min(a, b);
	b = min(x2, c);//b����̱�
	c = d - a - b;
	if((b+c)<=a)
	{
		cout << "�޷�����������" << endl;
	}
	else
	{
		cout << "�������ε��ܳ�C=" << d << endl;
		if((a==b)||(b==c)||(a==c))
		{
			cout << "����һ������������" << endl;
		}
	}
	return 0;
}