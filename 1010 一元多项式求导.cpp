#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;
int main()
{
	queue<int>q;
	string s;
	int len = 0;
	int n;
	int x, y,z;

	getline(cin, s);
	stringstream ss(s);
	while (ss >> n) {
		q.push(n);
	}
	while (!q.empty()) {
		x = q.front();
		q.pop();
		y = q.front();
		q.pop();
		z = x * y;
		if (z != 0) {
			if (len == 0) {
				cout << z << " " << --y;
			}
			else
			{
				cout << " " << z << " " << --y;
			}
		}
		else if (z==0&& len==0)
		{
			cout << "0 0";
		}
		len++;
	}
	cout << endl;
	return 0;
}