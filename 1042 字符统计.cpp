#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s;
	vector<int>v(27);
	int ssize;

	getline(cin, s);
	ssize = s.size();
	for (int i = 0; i < ssize; i++) {
		s[i] = tolower(s[i]);
		if (s[i] >= 'a'&&s[i] <= 'z') {
			v[s[i]-97]++;
		}
	}
	int Max=0;
	for (int i = 1; i < 27; i++) {
		if (v[i] > v[Max])Max = i;
	}
	cout << (char)(Max + 97) << " " << v[Max] << endl;
}