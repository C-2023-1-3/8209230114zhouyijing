#include<iostream>
using namespace std;

void count(const char s[], int counts[]) {
	for (int m = 0; m < 26; m++) {
		counts[m] = 0;
	}
	for (int n = 0; n < 99; n++) {
		counts[s[n] - 'a']++;
		counts[s[n] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0) {
			cout << endl << static_cast<char>(i + 'a') << ":" << counts[i] << "  times" << endl;
		}
	}

}

int main()
{
	int counts[26];
	char s[99];
	cout << "Enter a string:";
	cin.getline(s, 99);
	count(s, counts);
	return 0;
}