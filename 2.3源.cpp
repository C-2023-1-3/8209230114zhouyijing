#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	float a, b, c, d,x1,x2;
	cout << "请输入三条边长" << endl;
	cin >> a >> b >> c;
	d = a + b + c;
	x1 = max(a, b);
	a = max(x1, c);//a是最长边
	x2 = min(a, b);
	b = min(x2, c);//b是最短边
	c = d - a - b;
	if((b+c)<=a)
	{
		cout << "无法构成三角形" << endl;
	}
	else
	{
		cout << "该三角形的周长C=" << d << endl;
		if((a==b)||(b==c)||(a==c))
		{
			cout << "这是一个等腰三角形" << endl;
		}
	}
	return 0;
}