#include <iostream>
#include <string>
#include <sstream>
#include <array>
#include <queue>
using namespace std;
int main()
{
	array<int, 5>arr{ 0,0,0,0,0 };
	queue<int>q;
	queue<int>qaq;
	string s;
	getline(cin, s);
	stringstream ss(s);
	int lj;
	double i = 0, qq=0;

	while (ss >> lj) {
		q.push(lj);
	}
	q.pop();
	while (!q.empty()) {
		lj = q.front();
		q.pop();
		if (lj % 5 == 0 && lj % 2 == 0) {
			arr.at(0) += lj;
		}
		else if (lj % 5 == 1) {
			qaq.push(lj);
			qq++;
		}
		else if (lj % 5 == 2) {
			arr.at(2)++;
		}
		else if (lj % 5 == 3) {
			arr.at(3) += lj;
			i++;
		}
		else if (lj % 5 == 4) {
			arr.at(4) = (arr.at(4) > lj) ? arr.at(4) : lj;
		}
	}
	swap(q, qaq);
	int cf = 1;
	while (!q.empty()) {
		int a;
		a = q.front();
		q.pop();
		arr.at(1) = arr.at(1) + (cf*a);
		cf *= -1;
	}
	for (int j = 0; j < 5; j++) {
		if (j > 0) {
			cout << ' ';
		}
		if (j == 1 && qq != 0) {
			cout << arr.at(j);
		}
		else if (arr.at(j) == 0) {
			cout << 'N';
		}
		else if (j == 3) {
			printf("%.1f", arr.at(j) / i);
		}
		else {
			cout << arr.at(j);
		}
	}
	cout << endl;
	return 0;
}