#include<iostream>
using namespace std;
const int MaxN = 5;
class Student {
private:
	int number, score;
public:
	Student(int num, int scr);//构造函数
	Student();
	int getnum() const { return number; }
	int getscr() const { return score; }
};
Student::Student(int num, int scr) :number(num), score(scr) {};//构造函数的实现，给对象数组传参数
//注意：是要比较当前者和之前最高者的成绩！！！不是当前和前一个比较！！！
int max(Student* students)//创建一个名叫“students”的指针，指向student类对象
{
	int no = 0;
	//Student stu[MaxN];
	for (int i = 1; i < MaxN; i++)
	{
		if (students[i].getscr() > students[no].getscr())//用指针访问数组
		{
			no = i;//记下现在比较出的最高分是数组中的第几个
		}
	}
	return students[no].getnum();//返回最高分对应的学号
}
int main()
{
	Student stu[MaxN] = { Student(230101,97),Student(230102,98),Student(230103,96),Student(230104,99),Student(230105,95) };
	//定义对象数组
	cout << "the student's ID number of the heighest score is:" << max(stu) << endl;//stu数组名代表数组首地址，和max函数的参数，student类指针建立联系
}