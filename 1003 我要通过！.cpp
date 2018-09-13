#include <iostream>
#include<array>
#include <string>
using namespace std;
int main()
{
	array<int, 3>arr;
	array<char,2>arrl{'P','T'};
	string s;
	int len;
	int ssize;
	int N;

	cin >> N;
	getchar();
	while (N--) {
		arr[0] = arr[1] = arr[2] = 0;
		len = 0;
		getline(cin, s);
		ssize = s.size();
		for (int i = 0; i < ssize; i++) {
			if (s[i] == 'A') {
				arr[len]++;
			}
			else {
				if (arrl[len]==s[i])
					len++;
				else {
					len = 0;
					break;
				}
			}
		}
		if (len !=2) {
			cout << "NO" << endl;
		}
		else {
			if (arr[0] * arr[1] == arr[2]&&arr[1]!=0) {
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
	return 0;

}