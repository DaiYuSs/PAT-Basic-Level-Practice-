#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	long p, a;
	int ssize;
	unsigned long Sum=0;
	string s;

	p = a  = 0;
	getline(cin, s);
	ssize = s.size();
	for (int i = 0; i < ssize; i++) {
		if (s.at(i) == 'P')p++;
		else if (s.at(i) == 'A')a += p;
		else if (s.at(i) == 'T')Sum += a;
	}
	cout << Sum % 1000000007 << endl;
	return 0;
}
//APPAPAT
//AAPTTAT