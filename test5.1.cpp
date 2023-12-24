#include<iostream>
using namespace std;
class Time//定义Time类
{
 private:
	int hour;
	int minute;
	int sec;
 public :
	 void SetTime()
	 {
		 cin >> hour; cin >> minute; cin >> sec;
	 }
	 void ShowTime()
	 {
		 cout << hour << ":" << minute << ":" << sec << endl;
	 }
};
int main()
{
	Time t1;//定义t1为Time类的对象
	t1.SetTime();
	t1.ShowTime();
	return 0;
}