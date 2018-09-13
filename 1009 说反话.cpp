#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string s;
	int i;
	stack<string>StackS;

	getline(cin, s);
	stringstream ss(s);
	while (ss >> s) {
		StackS.push(s);
	}
	i = 0;
	while (StackS.size()) {
		if (i != 0) {
			cout << " ";
		}
		cout << StackS.top();
		StackS.pop();
		i++;
	}
	cout << endl;
	return 0;
}