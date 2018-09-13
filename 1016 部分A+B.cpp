#include <iostream>
#include <string>
#include <sstream>
#include <array>
#include <queue>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	stringstream ss(s);
	array<int, 4>intarr{0,0,0,0};
	queue<string>q;
	int i;

	i = 0;
	while (ss >> s) {

		q.push(s);
		ss >> intarr[i];
		i++;
	}
	i = 0;
	while (!q.empty()) {
		s = q.front();
		for (int j = 0; j < s.size(); j++) {
			if ((s[j]-48) == intarr[i]) {
				intarr[i + 2] = intarr[i + 2] * 10 + intarr[i];
			}
		}
		q.pop();
		i++;
	}
	cout << intarr[2] + intarr[3] << endl;

	return 0;
}