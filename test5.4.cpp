#include<iostream>
using namespace std;
const int MaxN = 5;
class Student {
private:
	int number, score;
public:
	Student(int num, int scr);//���캯��
	Student();
	int getnum() const { return number; }
	int getscr() const { return score; }
};
Student::Student(int num, int scr) :number(num), score(scr) {};//���캯����ʵ�֣����������鴫����
//ע�⣺��Ҫ�Ƚϵ�ǰ�ߺ�֮ǰ����ߵĳɼ����������ǵ�ǰ��ǰһ���Ƚϣ�����
int max(Student* students)//����һ�����С�students����ָ�룬ָ��student�����
{
	int no = 0;
	//Student stu[MaxN];
	for (int i = 1; i < MaxN; i++)
	{
		if (students[i].getscr() > students[no].getscr())//��ָ���������
		{
			no = i;//�������ڱȽϳ�����߷��������еĵڼ���
		}
	}
	return students[no].getnum();//������߷ֶ�Ӧ��ѧ��
}
int main()
{
	Student stu[MaxN] = { Student(230101,97),Student(230102,98),Student(230103,96),Student(230104,99),Student(230105,95) };
	//�����������
	cout << "the student's ID number of the heighest score is:" << max(stu) << endl;//stu���������������׵�ַ����max�����Ĳ�����student��ָ�뽨����ϵ
}