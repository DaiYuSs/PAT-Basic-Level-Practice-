#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool sfzpdd(int a);
bool sfzpd[101];
string sfz[101];
int Value[18] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char M[18] = { '1','0','X','9','8','7','6','5','4','3','2' };
int main()
{
	bool flag = true;
	int n;
	memset(sfzpd, true, 101);
	cin >> n;
	for (int i = 0; i<n; i++) {
		cin >> sfz[i];
		//getline(cin,sfzpd[i]);
		//cin >> sfz[i];
	}
	for (int i = 0; i<n; i++) {
		sfzpdd(i);
	}
	for (int i = 0; i<n; i++) {
		if (!sfzpd[i])flag = false;
	}
	if (flag)
		cout << "All passed" << endl;
	else {
		for (int i = 0; i<n; i++) {
			if (!sfzpd[i]) {
				//printf("%s", sfz[i]);
				cout << sfz[i] << endl;
			}
		}
	}
	return 0;
}
bool sfzpdd(int a)
{
	for (int i = 0; i<17; i++) {
		if (!(sfz[a][i] >= '0'&&sfz[a][i] <= '9')) {
			sfzpd[a] = false;
			return false;
		}
	}
	int sum = 0;
	for (int i = 0; i<17; i++) {
		sum += (Value[i] * (sfz[a][i] - '0'));
	}
	if (sfz[a][17] != M[sum % 11])sfzpd[a] = false;
}