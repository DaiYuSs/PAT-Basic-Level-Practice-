#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
string x;
string::iterator it;

void qaerasea(char ch);
int main()
{
	string s;

	getline(cin, s);
	getline(cin, x);
	for (int i = 0; i < s.size(); i++) {
		qaerasea(s.at(i));
	}
	for (int i = 0; i < x.size(); i++) {
		cout << x.at(i);
	}
	cout << endl;
	return 0;
}

void qaerasea(char ch)
{
	if (ch == '+') {
		it = x.begin();
		while (it != x.end()) {
			if (*it >= 'A'&&*it <= 'Z') {
				it = x.erase(it);
			}
			else {
				it++;
			}
		}
	}
	else {
		ch = tolower(ch);
		it = x.begin();
		while (it != x.end()) {
			if (ch == tolower(*it)) {
				it = x.erase(it);
			}
			else {
				it++;
			}
		}
	}
}