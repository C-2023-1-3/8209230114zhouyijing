#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入数组元素个数：";
	cin >> a;
	int* s = new int[a];
	cout << endl << "请输入数组元素：";
	for (int i = 0; i < a; i++) {
		cin >> s[i];
	}
	for (int m = 0; m < a; m++) {
		for (int n = m + 1; n < a; n++) {
			if (s[m] > s[n]) {
				b = s[m];
				s[m] = s[n];
				s[n] = b;
			}
		}
	}
	cout << endl;
	cout << "调整后，数组最终为：";
	int* p_s = s;
	for (int j = 0; j < a; j++) {
		cout << *(p_s + j) << " ";
	}
	delete p_s;
	delete s;
	return 0;
}