#include <iostream>
#include <vector>
#include <sstream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<string>sta;
	vector<string>nocarry{"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	vector<string>carry{ "tret","tam","hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
	string s,lj;
	stringstream ss;
	int n;
	int num;

	cin >> n;getchar();
	for (int j = 0; j < n; j++) {
		getline(cin, s);
		if (s[0] >= '0'&&s[0] <= '9') {
			num = s[0]-48;
			for (int i = 1; i < s.size(); i++) {
				num = num * 10 + (s[i]-48);
			}
			(num % 13 == 0) ? sta.push(carry[num / 13])  : sta.push(nocarry[num % 13]);
			num=(num % 13 == 0) ?  0: num - num % 13;
			if (num!=0)sta.push(carry[num / 13]);
			cout << sta.top(); sta.pop();
			while (!sta.empty()) { cout << " " << sta.top(); sta.pop(); }
			cout << endl;
		}
		else {
			num = 0;
			ss << s;
			while (ss >> lj) {
				for (int i = 0; i < 13; i++) {
					if (nocarry.at(i) == lj) {
						num += i;
					}
				}
				for (int i = 0; i < 13; i++) {
					if (carry.at(i) == lj) {
						num += (13 * i);
					}
				}
			}
			cout << num << endl;
			ss.clear();
		}
	}
	return 0;
}