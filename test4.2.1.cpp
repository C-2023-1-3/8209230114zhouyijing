#include<iostream>
using namespace std;

int indexOf(const char* s1[], const char* s2[]) {
	bool a = false;
	int b;
	for (int i = 0; i < 999; i++) {
		if (*s1[0] == *s2[i]) {
			b = i;
			for (int m = 0, n = i; *s1[m] == *s2[n]; m++, n++) {
				if (*s1[m + 1] == '\0') {
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
	const int size = 999;
	char s1[999], s2[999];
	const char* s3[999];
	const char* s4[999];
	cout << "Enter the first string：";
	cin.getline(s1, 999);
	cout << endl << "Enter the second string：";
	cin.getline(s2, 999);
	for (int g = 0; g < 999; g++) {
		s3[g] = &s1[g];
		s4[g] = &s2[g];
	}
	cout << endl << "indexOf(" << s1 << "," << s2 << ") is " << indexOf(s3, s4) << endl;
	return 0;
}