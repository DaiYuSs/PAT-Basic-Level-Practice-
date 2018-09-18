#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
	string s;
	list<char>q;
	bool flag = false;
	int E = 0;
	int count;
	list<char>::iterator Dflag;

	count = 0;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		q.push_back(s[i]);
	}
	if (q.front() == '-') {
		cout << q.front();
	}
	q.pop_front();
	list<char>::iterator it;
	it = q.begin();
	while (it != q.end()) {
		if (*it == 'E') {
			break;
		}
		if (flag) {
			count++;
		}
		if (*it == '.') {
			Dflag = it;
			flag = true;
		}
		it++;
	}
	it = q.erase(it);//»•µÙE
	if (*it == '+') {
		it = q.erase(it);	//»•µÙ+
		while (it != q.end()) {
			E = E * 10 + (*it - 48);
			it = q.erase(it);
		}
		q.erase(Dflag);
		for (int i = 0; i < E - count; i++) {
			q.push_back('0');
		}
		if (E - count > 0) {
			E = -1;
		}
		else {
			E++;
		}
		for (int i = 0;q.size(); i++) {
			if (i == E) {
				cout << '.';
			}
			else {
				cout << q.front();
				q.pop_front();
			}
		}
	}
	else if (*it == '-') {
		it = q.erase(it);	//»•µÙ-
		while (it != q.end()) {
			E = E * 10 + (*it - 48);
			it = q.erase(it);
		}
		if (E >= 1) {
			E--; q.erase(Dflag);
			cout << "0.";
		}
		for (int i = 0; i < E; i++) {
			q.push_front('0');
		}
		it = q.begin();
		while (it != q.end()) {
			cout << *it;
			it++;
		}
	}
	cout << endl;
	return 0;
}