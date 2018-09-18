#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, ss,sum;
	int ssize, sssize, j=1;
	cin >> s >> ss;
	ssize = s.size() - 1; sssize = ss.size() - 1;
	if (ssize < sssize)
		for (; ssize != sssize; ssize++)s = '0' + s;
	else if (ssize > sssize)
		for (; ssize != sssize;sssize++)ss = '0' + ss;
	//提交保存之神仙代码
	for (; ssize >= 0 && sssize >= 0; ssize--, sssize--, j++) {
		if (j % 2 == 1) 
			sum = "0123456789JQK"[(s[ssize] + ss[sssize] - '0'-'0') % 13] + sum;
		else
			sum = "1234567890123456789"[(ss[sssize] - '0' - (s[ssize] - '0')) + 9] + sum;
	}
	cout <<sum<< endl;
	return 0;
}
/*
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string s, ss;
	int ssize, sssize;
	int lj;
	int j;
	bool flag = false;

	j = 1;
	cin >> s >> ss;
	ssize = s.size() - 1; sssize = ss.size() - 1;
	if (ssize < sssize) {
		while (ssize != sssize) {
			s = '0' + s;
			ssize++;
		}
	}
	else if (ssize > sssize) {
		while (ssize != sssize) {
			ss = '0' + ss;
			sssize++;
		}
	}
	for (; ssize >= 0 && sssize >= 0; ssize--, sssize--, j++) {
		if (j % 2 == 0) {
			lj = (ss.at(sssize) - '0') - (s.at(ssize) - '0');
			if (lj < 0)lj += 10;
			ss.at(sssize) = lj + '0';
		}
		else {
			lj = (ss.at(sssize) - '0') + (s.at(ssize) - '0');
			lj %= 13;
			if (lj >= 10) {
				switch (lj)
				{
				case 10:ss.at(sssize) = 'J'; break;
				case 11:ss.at(sssize) = 'Q'; break;
				case 12:ss.at(sssize) = 'K'; break;
				default:
					break;
				}
			}
			else {
				ss.at(sssize) = lj + '0';
			}
		}
	}
	sssize = ss.size();
	for (int i = 0; i < sssize; i++) {
		cout << ss.at(i);
	}
	cout << endl;
	return 0;
}
*/