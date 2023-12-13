#include<iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
	bool a = false;
	int b;
	for (int i = 0; i < 999; i++) {
		if (s1[0] == s2[i]) {
			b = i;
			for (int m = 0, n = i; s1[m] == s2[n]; m++, n++) {
				if (s1[m + 1] == '\0') {
					a = true;
					break;
				}
			}
		}
	}
	if (a == true) {
		return b;
	}
	else {
		return -1;
	}
	return 0;
}
int main()
{
	char s1[999], s2[999];
	cout << "Enter the first string£º";
	cin.getline(s1, 999);
	cout << endl << "Enter the second string£º";
	cin.getline(s2, 999);
	cout << endl << "indexOf(¡°" << s1 << "¡±£¬¡°" << s2 << "¡±) is " << indexOf(s1, s2) << endl;
	return 0;
}