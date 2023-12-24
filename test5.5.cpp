#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int xx, int yy);
	int getx()const { return x; }
	int gety()const { return y; }
	void setPoint(int i,int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "after:" << "(" << x << "," << y << ")" << endl;
	}
};
Point::Point(int xx, int yy) :x(xx), y(yy) {};
int main()
{
	Point p(60, 80);
	cout << "please input the increment i&j:" << endl;
	int i, j;
	cin >> i >> j;
	p.setPoint(i, j);
	p.display();
	return 0;
}