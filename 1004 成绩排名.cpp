#include <iostream>
#include <string>
#include <stdio.h>
#include <queue>
using namespace std;

struct Mystruct
{
	string name;
	string ID;
	int score;
	friend bool operator < (Mystruct a, Mystruct b) {
		return a.score < b.score;
	}
};

int main()
{
	priority_queue <Mystruct> p;
	Mystruct s;

	int n;
	cin >> n;

	while (n--) {
		cin >> s.name>>s.ID>>s.score;
		p.push(s);
	}
	s = p.top();
	cout << s.name << " " << s.ID << endl;
	p.pop();
	if (!p.empty()) {
		while (!p.empty()) {
			s = p.top();
			p.pop();

		}
	}
	cout << s.name << " " << s.ID << endl;
}