#include<iostream>
using namespace std;
class Cuboid{
private:
	int length, width, height;
public:
	void Setdata()
	{
		int l, w, h;
		cout << "please input the data" << endl;
		cin >> l >> w >> h;
		length = l;
		width = w;
		height = h;
	}
	int Volume()
	{
		int V = length * width * height;
		return V;
	}
};
int main()
{
	Cuboid V1;
	V1.Setdata();
	cout<<V1.Volume()<<endl;
	return 0;
}